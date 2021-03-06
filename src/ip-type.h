#include <stdint.h>

typedef union {
	unsigned char octet[4];
	uint32_t as_int;
} ip_type;

extern const ip_type ip_type_invalid;
extern const ip_type ip_type_localhost;

// Definition for ipv6
/*
typedef union {
	unsigned char octet[4];
	uint32_t as_int;
} ip_type4;

typedef struct {
	union {
		ip_type4 v4;
		unsigned char v6[16];
	} addr;
	char is_v6;
} ip_type;
*/