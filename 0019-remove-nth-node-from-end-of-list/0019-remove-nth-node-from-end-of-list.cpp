/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   int getLengthLinkList(ListNode*head)
	{
		ListNode* temp = head;
		int count = 0;
		while (temp != nullptr)
		{
			count++;
			temp = temp->next;
		}
		return count;
	}

	ListNode*  removeNthFromEnd(ListNode *head,int n)
	{
		int pos = getLengthLinkList(head) - n;
		int count = 0;
		ListNode* temp = head;
		
		 if (n == getLengthLinkList(head)) {
			head = temp->next;
			return head;
		}
		else if (n == 1)
		{
			while (temp->next->next != nullptr)
			{
				temp = temp->next;
			}
			temp->next = nullptr;
			return head;
			
		}
		else
		{
			while (temp->next != nullptr)
			{
				count++;
				if (count == pos) break;
				temp = temp->next;
			}
			temp->next = temp->next->next;
			return head;
		}
		return head;
	}
};