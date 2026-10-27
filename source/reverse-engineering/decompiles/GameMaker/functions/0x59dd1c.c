// rea decompile_all
// name: FUN_0059dd1c
// address: 0x59dd1c
// body: available
// range: 0x59dd1c-0x59dee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0059de79) */

void FUN_0059dd1c(int param_1,int param_2)

{
  char cVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  byte local_1c;
  undefined4 local_14;

  FUN_0059dee4(param_1);
  cVar1 = *(char *)(param_2 + 9);
  if (cVar1 == '\0') {
    if (*(char *)(param_2 + 8) == '\x02') {
      uVar3 = FUN_00588fe8(CONCAT11((char)**(undefined2 **)(param_1 + 0xd0),
                                    (char)((ushort)**(undefined2 **)(param_1 + 0xd0) >> 8)),
                           CONCAT22(extraout_var_02,0xf),CONCAT22(extraout_var,3));
    }
    else if (*(char *)(param_2 + 8) == '\x10') {
      uVar3 = FUN_00588fe8(CONCAT11((char)**(undefined2 **)(param_1 + 0xd0),
                                    (char)((ushort)**(undefined2 **)(param_1 + 0xd0) >> 8)),
                           CONCAT22(extraout_var_02,0xff),CONCAT22(extraout_var,0xffff));
    }
    else {
      uVar3 = (uint)(byte)((ushort)**(undefined2 **)(param_1 + 0xd0) >> 8);
    }
    uVar3 = uVar3 & 0xff;
    *(uint *)(param_1 + 0xf0) = uVar3 | uVar3 << 8 | uVar3 << 0x10;
  }
  else if (cVar1 == '\x02') {
    puVar2 = *(undefined2 **)(param_1 + 0xd0);
    if (*(char *)(param_2 + 8) == '\x10') {
      uVar3 = FUN_00588fe8(CONCAT11((char)*puVar2,(char)((ushort)*puVar2 >> 8)),
                           CONCAT22(extraout_var_02,0xff),CONCAT22(extraout_var,0xffff));
      local_1c = FUN_00588fe8(CONCAT11((char)puVar2[1],(char)((ushort)puVar2[1] >> 8)),
                              CONCAT22(extraout_var_03,0xff),CONCAT22(extraout_var_00,0xffff));
      uVar4 = FUN_00588fe8(CONCAT11((char)puVar2[2],(char)((ushort)puVar2[2] >> 8)),
                           CONCAT22(extraout_var_04,0xff),CONCAT22(extraout_var_01,0xffff));
    }
    else {
      uVar3 = (uint)(byte)((ushort)*puVar2 >> 8);
      local_1c = (byte)((ushort)puVar2[1] >> 8);
      uVar4 = (uint)(byte)((ushort)puVar2[2] >> 8);
    }
    *(uint *)(param_1 + 0xf0) = uVar3 & 0xff | (uint)local_1c << 8 | (uVar4 & 0xff) << 0x10;
  }
  else if ((cVar1 != '\x04') && (cVar1 != '\x06')) {
    FUN_00409be0(param_1 + 0xec,&DAT_0058fc20,1,0xff);
    if (*(uint *)(param_1 + 0xd8) < 0x101) {
      local_14 = 0x100;
    }
    else {
      local_14 = *(undefined4 *)(param_1 + 0xd8);
    }
    FUN_0040450c(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xec),local_14);
    uVar3 = *(uint *)(param_1 + 0xd8);
    if (uVar3 < 0x100) {
      FUN_00404f08(*(int *)(param_1 + 0xec) + uVar3,0x100 - uVar3,0xff);
    }
  }
  return;
}
