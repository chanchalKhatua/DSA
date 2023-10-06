getline() -         This function is used to store a stream of characters as entered by the user in the object memory.
push_back()	        This function is used to input a character at the end of the string.
pop_back()	        Introduced from C++11(for strings), this function is used to delete the last character from the string. 
capacity()	        This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. 
                    Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.
resize()	          This function changes the size of the string, the size can be increased or decreased.
length()	          This function finds the length of the string. 
shrink_to_fit()	    This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. 
                    This operation is useful to save additional memory if we are sure that no further addition of characters has to be made.
begin()           	This function returns an iterator to the beginning of the string.
end()	              This function returns an iterator to the next to the end of the string.
rbegin()          	This function returns a reverse iterator pointing at the end of the string.
rend()	            This function returns a reverse iterator pointing to the previous of beginning of the string.
cbegin()	          This function returns a constant iterator pointing to the beginning of the string, it cannot be 
                    used to modify the contents it points-to.
cend()	            This function returns a constant iterator pointing to the next of end of the string,
                    it cannot be used to modify the contents it points-to.
copy(“char array”, len, pos) 	This function copies the substring in the target character array mentioned in its arguments. It takes 3
                             arguments, target char array, length to be copied, and starting position in the string to start copying.
 str1.swap(str2); 
