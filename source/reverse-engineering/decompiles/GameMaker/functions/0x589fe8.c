// rea decompile_all
// name: FUN_00589fe8
// address: 0x589fe8
// body: available
// range: 0x589fe8-0x58ac02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00589fe8(int param_1,undefined4 param_2,int param_3,byte param_4,int param_5,
                 ushort *param_6)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  ushort *local_ac;
  ushort *local_a8;
  byte local_5;

  for (; -1 < param_3; param_3 = param_3 + -1) {
  }
  local_5 = 0x80;
  uVar3 = (uint)((*(byte *)(param_1 + 0x141) & 1) != 0);
  local_ac = param_6;
  local_a8 = param_6;
  if (*(char *)(param_1 + 5) == '\b') {
    if (*(char *)(param_1 + 6) == '\b') {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if ((param_4 & local_5) == 0) {
          local_a8 = (ushort *)((int)local_a8 + uVar3 + 3);
        }
        else {
          FUN_00404878();
          uVar1 = FUN_00588fd4();
          *(undefined1 *)local_a8 = uVar1;
          FUN_00404878();
          uVar1 = FUN_00588fd4();
          *(undefined1 *)((int)local_a8 + 1) = uVar1;
          FUN_00404878();
          uVar1 = FUN_00588fd4();
          *(undefined1 *)(local_a8 + 1) = uVar1;
          local_a8 = (ushort *)((int)(local_a8 + 1) + uVar3 + 1);
        }
        local_5 = local_5 >> 1 | local_5 << 7;
      }
    }
    else if (*(char *)(param_1 + 6) == '\x10') {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if ((param_4 & local_5) == 0) {
          local_ac = local_ac + uVar3 + 3;
        }
        else {
          FUN_00404878();
          uVar1 = FUN_00588fd4();
          uVar2 = FUN_00588fe8(uVar1,CONCAT22(extraout_var_02,0xffff),CONCAT22(extraout_var,0xff));
          *local_ac = uVar2;
          FUN_00404878();
          uVar1 = FUN_00588fd4();
          uVar2 = FUN_00588fe8(uVar1,CONCAT22(extraout_var_03,0xffff),CONCAT22(extraout_var_00,0xff)
                              );
          local_ac[1] = uVar2;
          FUN_00404878();
          uVar1 = FUN_00588fd4();
          uVar2 = FUN_00588fe8(uVar1,CONCAT22(extraout_var_04,0xffff),CONCAT22(extraout_var_01,0xff)
                              );
          local_ac[2] = uVar2;
          local_ac = local_ac + 2 + uVar3 + 1;
        }
        local_5 = local_5 >> 1 | local_5 << 7;
      }
    }
  }
  else if (*(char *)(param_1 + 5) == '\x10') {
    if (*(char *)(param_1 + 6) == '\b') {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if ((param_4 & local_5) == 0) {
          local_a8 = (ushort *)((int)local_a8 + uVar3 + 3);
        }
        else {
          FUN_00404878();
          uVar1 = FUN_00588fd4();
          *(undefined1 *)local_a8 = uVar1;
          FUN_00404878();
          uVar1 = FUN_00588fd4();
          *(undefined1 *)((int)local_a8 + 1) = uVar1;
          FUN_00404878();
          uVar1 = FUN_00588fd4();
          *(undefined1 *)(local_a8 + 1) = uVar1;
          local_a8 = (ushort *)((int)(local_a8 + 1) + uVar3 + 1);
        }
        local_5 = local_5 >> 1 | local_5 << 7;
      }
    }
    else if (*(char *)(param_1 + 6) == '\x10') {
      for (; param_5 != 0; param_5 = param_5 + -1) {
                    /* WARNING: Read-only address (ram,0x0058ac04) is written */
                    /* WARNING: Read-only address (ram,0x0058ac18) is written */
                    /* WARNING: Read-only address (ram,0x0058ac24) is written */
                    /* WARNING: Read-only address (ram,0x0058ac34) is written */
        if ((param_4 & local_5) == 0) {
          local_ac = local_ac + uVar3 + 3;
        }
        else {
          FUN_00404878();
          uVar2 = FUN_00588fd4();
          *local_ac = uVar2 & 0xff;
          FUN_00404878();
          uVar2 = FUN_00588fd4();
          local_ac[1] = uVar2 & 0xff;
          FUN_00404878();
          uVar2 = FUN_00588fd4();
          local_ac[2] = uVar2 & 0xff;
          local_ac = local_ac + 2 + uVar3 + 1;
        }
        local_5 = local_5 >> 1 | local_5 << 7;
      }
    }
  }
  return;
}
