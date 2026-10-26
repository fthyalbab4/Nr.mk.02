// rea decompile_all
// name: FUN_00733b1c
// address: 0x733b1c
// body: available
// range: 0x733b1c-0x733be6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00733b1c(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined3 uVar3;

  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(uint *)(*param_1 + -4) >> 1;
  }
  if (*(uint *)PTR_DAT_007827c8 < param_3) {
    uVar3 = (undefined3)((uint)PTR_DAT_00782730 >> 8);
    if (*(uint *)PTR_DAT_00782730 < param_3) {
      if ((*param_2 < 1) || ((int)uVar1 < *param_2)) {
        uVar2 = 0;
      }
      else {
        uVar2 = CONCAT31(uVar3,1);
      }
      if ((char)uVar2 != '\0') {
        *(undefined2 *)(*param_1 + -2 + *param_2 * 2) = *(undefined2 *)PTR_DAT_00781c78;
        *param_2 = *param_2 + 1;
      }
    }
    else {
      if ((*param_2 < 1) || ((int)uVar1 <= *param_2)) {
        uVar2 = 0;
      }
      else {
        uVar2 = CONCAT31(uVar3,1);
      }
      if ((char)uVar2 != '\0') {
        param_3 = param_3 - _DAT_0077f85c;
        *(ushort *)(*param_1 + -2 + *param_2 * 2) =
             (ushort)(param_3 >> ((byte)DAT_0077f858 & 0x1f)) | 0xd800;
        *(ushort *)(*param_1 + *param_2 * 2) = (ushort)param_3 & _DAT_0077f860 | 0xdc00;
        *param_2 = *param_2 + 2;
      }
    }
  }
  else {
    if ((*param_2 < 1) || ((int)uVar1 < *param_2)) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT31((int3)((uint)PTR_DAT_007827c8 >> 8),1);
    }
    if ((char)uVar2 != '\0') {
      *(short *)(*param_1 + -2 + *param_2 * 2) = (short)param_3;
      *param_2 = *param_2 + 1;
    }
  }
  return uVar2;
}
