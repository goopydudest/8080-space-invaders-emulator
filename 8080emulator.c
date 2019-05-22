#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// TODO, figure out what the hell these are for
typedef struct Conditions {
    uint8_t    z:1;
    uint8_t    s:1;
    uint8_t    p:1;
    uint8_t    cy:1;
    uint8_t    ac:1;
    uint8_t    pad:3;
} Conditions;

// struct to capture the current state of our machine
typedef struct Machine_state {
    // these are the registers
    uint8_t     a;
    uint8_t     b;
    uint8_t     c;
    uint8_t     d;
    uint8_t     e;
    uint8_t     h;
    uint8_t     l;
    
    // stack pointer and program counter
    uint16_t    sp;
    uint16_t    pc;

    // memory buffer for the RAM, basically all of the code lives here
    uint8_t     *memory;
    
    //  TODO once again I don't know what this is for
    struct Conditions   cs;
    
    // TODO and I also don't know what this is for
    uint8_t     int_enable;
} Machine_state;

// function routine for unimplemented instructions
void unimplemented_instr(Machine_state* state) {
    printf("Error: Unimplemented instruction\n");
    exit(1);
}

// this is the single byte handler that I'm writing to simulate an 8080 instruction
int sim_8080(Machine_state* state) {
    // grab the opcde from the simulated RAM
    // it'll be right at PC since opcodes are first
    unsigned char *opcode = &state->memory[state->pc];
    
    switch(*opcode) {
        case 0x00: unimplemented_instr(state); break;
        case 0x01: unimplemented_instr(state); break;
        case 0x02: unimplemented_instr(state); break;
        case 0x03: unimplemented_instr(state); break;
        case 0x04: unimplemented_instr(state); break;
        case 0x05: unimplemented_instr(state); break;
        case 0x06: unimplemented_instr(state); break;
        case 0x07: unimplemented_instr(state); break;
        case 0x08: unimplemented_instr(state); break;
        case 0x09: unimplemented_instr(state); break;
        case 0x0a: unimplemented_instr(state); break;
        case 0x0b: unimplemented_instr(state); break;
        case 0x0c: unimplemented_instr(state); break;
        case 0x0d: unimplemented_instr(state); break;
        case 0x0e: unimplemented_instr(state); break;
        case 0x0f: unimplemented_instr(state); break;
        case 0x10: unimplemented_instr(state); break;
        case 0x11: unimplemented_instr(state); break;
        case 0x12: unimplemented_instr(state); break;
        case 0x13: unimplemented_instr(state); break;
        case 0x14: unimplemented_instr(state); break;
        case 0x15: unimplemented_instr(state); break;
        case 0x16: unimplemented_instr(state); break;
        case 0x17: unimplemented_instr(state); break;
        case 0x18: unimplemented_instr(state); break;
        case 0x19: unimplemented_instr(state); break;
        case 0x1a: unimplemented_instr(state); break;
        case 0x1b: unimplemented_instr(state); break;
        case 0x1c: unimplemented_instr(state); break;
        case 0x1d: unimplemented_instr(state); break;
        case 0x1e: unimplemented_instr(state); break;
        case 0x1f: unimplemented_instr(state); break;
        case 0x20: unimplemented_instr(state); break;
        case 0x21: unimplemented_instr(state); break;
        case 0x22: unimplemented_instr(state); break;
        case 0x23: unimplemented_instr(state); break;
        case 0x24: unimplemented_instr(state); break;
        case 0x25: unimplemented_instr(state); break;
        case 0x26: unimplemented_instr(state); break;
        case 0x27: unimplemented_instr(state); break;
        case 0x28: unimplemented_instr(state); break;
        case 0x29: unimplemented_instr(state); break;
        case 0x2a: unimplemented_instr(state); break;
        case 0x2b: unimplemented_instr(state); break;
        case 0x2c: unimplemented_instr(state); break;
        case 0x2d: unimplemented_instr(state); break;
        case 0x2e: unimplemented_instr(state); break;
        case 0x2f: unimplemented_instr(state); break;
        case 0x30: unimplemented_instr(state); break;
        case 0x31: unimplemented_instr(state); break;
        case 0x32: unimplemented_instr(state); break;
        case 0x33: unimplemented_instr(state); break;
        case 0x34: unimplemented_instr(state); break;
        case 0x35: unimplemented_instr(state); break;
        case 0x36: unimplemented_instr(state); break;
        case 0x37: unimplemented_instr(state); break;
        case 0x38: unimplemented_instr(state); break;
        case 0x39: unimplemented_instr(state); break;
        case 0x3a: unimplemented_instr(state); break;
        case 0x3b: unimplemented_instr(state); break;
        case 0x3c: unimplemented_instr(state); break;
        case 0x3d: unimplemented_instr(state); break;
        case 0x3e: unimplemented_instr(state); break;
        case 0x3f: unimplemented_instr(state); break;
        case 0x40: unimplemented_instr(state); break;
        case 0x41: unimplemented_instr(state); break;
        case 0x42: unimplemented_instr(state); break;
        case 0x43: unimplemented_instr(state); break;
        case 0x44: unimplemented_instr(state); break;
        case 0x45: unimplemented_instr(state); break;
        case 0x46: unimplemented_instr(state); break;
        case 0x47: unimplemented_instr(state); break;
        case 0x48: unimplemented_instr(state); break;
        case 0x49: unimplemented_instr(state); break;
        case 0x4a: unimplemented_instr(state); break;
        case 0x4b: unimplemented_instr(state); break;
        case 0x4c: unimplemented_instr(state); break;
        case 0x4d: unimplemented_instr(state); break;
        case 0x4e: unimplemented_instr(state); break;
        case 0x4f: unimplemented_instr(state); break;
        case 0x50: unimplemented_instr(state); break;
        case 0x51: unimplemented_instr(state); break;
        case 0x52: unimplemented_instr(state); break;
        case 0x53: unimplemented_instr(state); break;
        case 0x54: unimplemented_instr(state); break;
        case 0x55: unimplemented_instr(state); break;
        case 0x56: unimplemented_instr(state); break;
        case 0x57: unimplemented_instr(state); break;
        case 0x58: unimplemented_instr(state); break;
        case 0x59: unimplemented_instr(state); break;
        case 0x5a: unimplemented_instr(state); break;
        case 0x5b: unimplemented_instr(state); break;
        case 0x5c: unimplemented_instr(state); break;
        case 0x5d: unimplemented_instr(state); break;
        case 0x5e: unimplemented_instr(state); break;
        case 0x5f: unimplemented_instr(state); break;
        case 0x60: unimplemented_instr(state); break;
        case 0x61: unimplemented_instr(state); break;
        case 0x62: unimplemented_instr(state); break;
        case 0x63: unimplemented_instr(state); break;
        case 0x64: unimplemented_instr(state); break;
        case 0x65: unimplemented_instr(state); break;
        case 0x66: unimplemented_instr(state); break;
        case 0x67: unimplemented_instr(state); break;
        case 0x68: unimplemented_instr(state); break;
        case 0x69: unimplemented_instr(state); break;
        case 0x6a: unimplemented_instr(state); break;
        case 0x6b: unimplemented_instr(state); break;
        case 0x6c: unimplemented_instr(state); break;
        case 0x6d: unimplemented_instr(state); break;
        case 0x6e: unimplemented_instr(state); break;
        case 0x6f: unimplemented_instr(state); break;
        case 0x70: unimplemented_instr(state); break;
        case 0x71: unimplemented_instr(state); break;
        case 0x72: unimplemented_instr(state); break;
        case 0x73: unimplemented_instr(state); break;
        case 0x74: unimplemented_instr(state); break;
        case 0x75: unimplemented_instr(state); break;
        case 0x76: unimplemented_instr(state); break;
        case 0x77: unimplemented_instr(state); break;
        case 0x78: unimplemented_instr(state); break;
        case 0x79: unimplemented_instr(state); break;
        case 0x7a: unimplemented_instr(state); break;
        case 0x7b: unimplemented_instr(state); break;
        case 0x7c: unimplemented_instr(state); break;
        case 0x7d: unimplemented_instr(state); break;
        case 0x7e: unimplemented_instr(state); break;
        case 0x7f: unimplemented_instr(state); break;
        case 0x80: unimplemented_instr(state); break;
        case 0x81: unimplemented_instr(state); break;
        case 0x82: unimplemented_instr(state); break;
        case 0x83: unimplemented_instr(state); break;
        case 0x84: unimplemented_instr(state); break;
        case 0x85: unimplemented_instr(state); break;
        case 0x86: unimplemented_instr(state); break;
        case 0x87: unimplemented_instr(state); break;
        case 0x88: unimplemented_instr(state); break;
        case 0x89: unimplemented_instr(state); break;
        case 0x8a: unimplemented_instr(state); break;
        case 0x8b: unimplemented_instr(state); break;
        case 0x8c: unimplemented_instr(state); break;
        case 0x8d: unimplemented_instr(state); break;
        case 0x8e: unimplemented_instr(state); break;
        case 0x8f: unimplemented_instr(state); break;
        case 0x90: unimplemented_instr(state); break;
        case 0x91: unimplemented_instr(state); break;
        case 0x92: unimplemented_instr(state); break;
        case 0x93: unimplemented_instr(state); break;
        case 0x94: unimplemented_instr(state); break;
        case 0x95: unimplemented_instr(state); break;
        case 0x96: unimplemented_instr(state); break;
        case 0x97: unimplemented_instr(state); break;
        case 0x98: unimplemented_instr(state); break;
        case 0x99: unimplemented_instr(state); break;
        case 0x9a: unimplemented_instr(state); break;
        case 0x9b: unimplemented_instr(state); break;
        case 0x9c: unimplemented_instr(state); break;
        case 0x9d: unimplemented_instr(state); break;
        case 0x9e: unimplemented_instr(state); break;
        case 0x9f: unimplemented_instr(state); break;
        case 0xa0: unimplemented_instr(state); break;
        case 0xa1: unimplemented_instr(state); break;
        case 0xa2: unimplemented_instr(state); break;
        case 0xa3: unimplemented_instr(state); break;
        case 0xa4: unimplemented_instr(state); break;
        case 0xa5: unimplemented_instr(state); break;
        case 0xa6: unimplemented_instr(state); break;
        case 0xa7: unimplemented_instr(state); break;
        case 0xa8: unimplemented_instr(state); break;
        case 0xa9: unimplemented_instr(state); break;
        case 0xaa: unimplemented_instr(state); break;
        case 0xab: unimplemented_instr(state); break;
        case 0xac: unimplemented_instr(state); break;
        case 0xad: unimplemented_instr(state); break;
        case 0xae: unimplemented_instr(state); break;
        case 0xaf: unimplemented_instr(state); break;
        case 0xb0: unimplemented_instr(state); break;
        case 0xb1: unimplemented_instr(state); break;
        case 0xb2: unimplemented_instr(state); break;
        case 0xb3: unimplemented_instr(state); break;
        case 0xb4: unimplemented_instr(state); break;
        case 0xb5: unimplemented_instr(state); break;
        case 0xb6: unimplemented_instr(state); break;
        case 0xb7: unimplemented_instr(state); break;
        case 0xb8: unimplemented_instr(state); break;
        case 0xb9: unimplemented_instr(state); break;
        case 0xba: unimplemented_instr(state); break;
        case 0xbb: unimplemented_instr(state); break;
        case 0xbc: unimplemented_instr(state); break;
        case 0xbd: unimplemented_instr(state); break;
        case 0xbe: unimplemented_instr(state); break;
        case 0xbf: unimplemented_instr(state); break;
        case 0xc0: unimplemented_instr(state); break;
        case 0xc1: unimplemented_instr(state); break;
        case 0xc2: unimplemented_instr(state); break;
        case 0xc3: unimplemented_instr(state); break;
        case 0xc4: unimplemented_instr(state); break;
        case 0xc5: unimplemented_instr(state); break;
        case 0xc6: unimplemented_instr(state); break;
        case 0xc7: unimplemented_instr(state); break;
        case 0xc8: unimplemented_instr(state); break;
        case 0xc9: unimplemented_instr(state); break;
        case 0xca: unimplemented_instr(state); break;
        case 0xcb: unimplemented_instr(state); break;
        case 0xcc: unimplemented_instr(state); break;
        case 0xcd: unimplemented_instr(state); break;
        case 0xce: unimplemented_instr(state); break;
        case 0xcf: unimplemented_instr(state); break;
        case 0xd0: unimplemented_instr(state); break;
        case 0xd1: unimplemented_instr(state); break;
        case 0xd2: unimplemented_instr(state); break;
        case 0xd3: unimplemented_instr(state); break;
        case 0xd4: unimplemented_instr(state); break;
        case 0xd5: unimplemented_instr(state); break;
        case 0xd6: unimplemented_instr(state); break;
        case 0xd7: unimplemented_instr(state); break;
        case 0xd8: unimplemented_instr(state); break;
        case 0xd9: unimplemented_instr(state); break;
        case 0xda: unimplemented_instr(state); break;
        case 0xdb: unimplemented_instr(state); break;
        case 0xdc: unimplemented_instr(state); break;
        case 0xdd: unimplemented_instr(state); break;
        case 0xde: unimplemented_instr(state); break;
        case 0xdf: unimplemented_instr(state); break;
        case 0xe0: unimplemented_instr(state); break;
        case 0xe1: unimplemented_instr(state); break;
        case 0xe2: unimplemented_instr(state); break;
        case 0xe3: unimplemented_instr(state); break;
        case 0xe4: unimplemented_instr(state); break;
        case 0xe5: unimplemented_instr(state); break;
        case 0xe6: unimplemented_instr(state); break;
        case 0xe7: unimplemented_instr(state); break;
        case 0xe8: unimplemented_instr(state); break;
        case 0xe9: unimplemented_instr(state); break;
        case 0xea: unimplemented_instr(state); break;
        case 0xeb: unimplemented_instr(state); break;
        case 0xec: unimplemented_instr(state); break;
        case 0xed: unimplemented_instr(state); break;
        case 0xee: unimplemented_instr(state); break;
        case 0xef: unimplemented_instr(state); break;
        case 0xf0: unimplemented_instr(state); break;
        case 0xf1: unimplemented_instr(state); break;
        case 0xf2: unimplemented_instr(state); break;
        case 0xf3: unimplemented_instr(state); break;
        case 0xf4: unimplemented_instr(state); break;
        case 0xf5: unimplemented_instr(state); break;
        case 0xf6: unimplemented_instr(state); break;
        case 0xf7: unimplemented_instr(state); break;
        case 0xf8: unimplemented_instr(state); break;
        case 0xf9: unimplemented_instr(state); break;
        case 0xfa: unimplemented_instr(state); break;
        case 0xfb: unimplemented_instr(state); break;
        case 0xfc: unimplemented_instr(state); break;
        case 0xfd: unimplemented_instr(state); break;
        case 0xfe: unimplemented_instr(state); break;
        case 0xff: unimplemented_instr(state); break;
    }
}

int main() {

}
