// rea decompile_all
// name: FUN_0044dd98
// address: 0x44dd98
// body: available
// range: 0x44dd98-0x44de9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort * FUN_0044dd98(short *param_1,ushort *param_2,ushort *param_3,undefined4 param_4,
                     undefined4 param_5)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  float10 in_ST0;
  undefined1 local_10 [2];
  undefined1 local_e [2];
  ushort *local_c;

  local_c = param_2;
  cVar1 = FUN_0041935c(param_1,local_e,local_10,param_3,param_4,param_5);
  *param_3 = *(ushort *)(&DAT_0067d1b2 + (uint)*param_3 * 2);
  FUN_0041932c(*param_1,CONCAT22(extraout_var_00,1),CONCAT22(extraout_var,1));
  iVar3 = FUN_004048c4();
  uVar4 = FUN_0044da64();
  if ((ushort)((short)uVar4 - 5U) < 3) {
    iVar5 = -(8 - (uVar4 & 0xffff));
  }
  else {
    iVar5 = (uVar4 & 0xffff) - 1;
  }
  iVar3 = iVar3 + iVar5;
  if (iVar3 < 1) {
    puVar6 = (ushort *)FUN_0044dd98(param_1,local_c,local_10,(double)in_ST0 - 1.0);
  }
  else {
    *local_c = (ushort)(iVar3 / 7);
    if (iVar3 % 7 != 0) {
      *local_c = *local_c + 1;
    }
    puVar6 = local_c;
    if (0x34 < *local_c) {
      if (cVar1 != '\0') {
        if ((short)uVar4 == 7) {
          uVar4 = CONCAT22((short)(uVar4 >> 0x10),1);
        }
        else {
          uVar4 = uVar4 + 1;
        }
      }
      uVar2 = (ushort)(uVar4 - 1);
      puVar6 = (ushort *)CONCAT22((short)(uVar4 - 1 >> 0x10),uVar2 - 3);
      if (uVar2 < 3) {
        *param_1 = *param_1 + 1;
        *local_c = 1;
        puVar6 = local_c;
      }
    }
  }
  return puVar6;
}
