#pragma once

// 2022/5/6/01µã54·Ö
#define LOG(str) \
	cout << __FILE__ << ":" << __LINE__ << " " << \
	__TIMESTAMP__ << " : " << str << endl;