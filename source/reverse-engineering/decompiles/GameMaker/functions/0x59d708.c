// rea decompile_all
// name: FUN_0059d708
// address: 0x59d708
// body: available
// range: 0x59d708-0x59d83f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059d708(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  uint uVar6;

  FUN_0059dee4(param_1,param_2,param_3,param_3);
  cVar1 = *(char *)(param_2 + 9);
  if (cVar1 == '\0') {
LAB_0059d735:
    if (*(char *)(param_2 + 8) == '\x02') {
      uVar4 = FUN_00588fe8(CONCAT11((char)**(undefined2 **)(param_1 + 0xd0),
                                    (char)((ushort)**(undefined2 **)(param_1 + 0xd0) >> 8)),
                           CONCAT22(extraout_var_02,0xf),CONCAT22(extraout_var,3));
      *(uint *)(param_1 + 0xf4) = uVar4 & 0xffff;
    }
    else if (*(char *)(param_2 + 8) == '\x10') {
      uVar4 = FUN_00588fe8(CONCAT11((char)**(undefined2 **)(param_1 + 0xd0),
                                    (char)((ushort)**(undefined2 **)(param_1 + 0xd0) >> 8)),
                           CONCAT22(extraout_var_02,0xff),CONCAT22(extraout_var,0xffff));
      *(uint *)(param_1 + 0xf4) = uVar4 & 0xffff;
    }
    else {
      *(uint *)(param_1 + 0xf4) = (uint)(byte)((ushort)**(undefined2 **)(param_1 + 0xd0) >> 8);
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x04') goto LAB_0059d735;
      if (cVar1 != '\x06') {
        *(uint *)(param_1 + 0xf4) = (uint)**(byte **)(param_1 + 0xd0);
        return;
      }
    }
    puVar2 = *(undefined2 **)(param_1 + 0xd0);
    if (*(char *)(param_2 + 8) == '\x10') {
      uVar4 = FUN_00588fe8(CONCAT11((char)*puVar2,(char)((ushort)*puVar2 >> 8)),
                           CONCAT22(extraout_var_02,0xff),CONCAT22(extraout_var,0xffff));
      bVar3 = FUN_00588fe8(CONCAT11((char)puVar2[1],(char)((ushort)puVar2[1] >> 8)),
                           CONCAT22(extraout_var_03,0xff),CONCAT22(extraout_var_00,0xffff));
      uVar6 = (uint)bVar3;
      uVar5 = FUN_00588fe8(CONCAT11((char)puVar2[2],(char)((ushort)puVar2[2] >> 8)),
                           CONCAT22(extraout_var_04,0xff),CONCAT22(extraout_var_01,0xffff));
    }
    else {
      uVar4 = (uint)(byte)((ushort)*puVar2 >> 8);
      uVar6 = (uint)(byte)((ushort)puVar2[1] >> 8);
      uVar5 = (uint)(byte)((ushort)puVar2[2] >> 8);
    }
    *(uint *)(param_1 + 0xf4) = uVar4 & 0xff | (uVar6 & 0xff) << 8 | (uVar5 & 0xff) << 0x10;
  }
  return;
}
