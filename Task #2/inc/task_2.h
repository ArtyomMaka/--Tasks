#ifndef TASK_2_H_
#define TASK_2_H_

char encryption(int key, int key_steps, char key_symbol){
	char res = key_symbol;
	for(int i = key_steps; i > 0; --i){
		res = ((res + key) % 256 + (key * 2) % sizeof(char)) % 128;
		++key;
	}
	return res;
}


#endif
