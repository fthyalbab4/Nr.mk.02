// rea decompile_all
// name: FUN_006b0c48
// address: 0x6b0c48
// body: available
// range: 0x6b0c48-0x6b0d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006b0c48(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;

  iVar1 = FUN_00405a4c(&DAT_006aee0c,1);
  *(undefined4 *)(iVar1 + 4) = param_2;
  if (param_3 < 0) {
    param_3 = 0;
  }
  *(int *)(iVar1 + 0xc) = param_3;
  iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
  iVar3 = iVar2 + -1;
  if (param_6 <= iVar2 + -1) {
    iVar3 = param_6;
  }
  *(int *)(iVar1 + 0x10) = iVar3;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x2f4);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x2f0);
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x300);
  FUN_00409be0(iVar1 + 8,&DAT_006aed80,1,(*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + 1);
  iVar3 = *(int *)(iVar1 + 0xc);
  if (iVar3 <= *(int *)(iVar1 + 0x10)) {
    local_c = (*(int *)(iVar1 + 0x10) - iVar3) + 1;
    do {
      FUN_00407eb8(*(int *)(iVar1 + 8) + (iVar3 - *(int *)(iVar1 + 0xc)) * 4,
                   *(undefined4 *)(*(int *)(param_1 + 0x2d8) + iVar3 * 0x10));
      iVar3 = iVar3 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return iVar1;
}
