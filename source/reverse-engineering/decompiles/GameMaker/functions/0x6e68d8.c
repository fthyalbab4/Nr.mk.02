// rea decompile_all
// name: FUN_006e68d8
// address: 0x6e68d8
// body: available
// range: 0x6e68d8-0x6e693b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e68d8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  FUN_006e6898(param_1);
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_00409be0(param_1 + 8,&DAT_006e5644,1,uVar1);
  iVar3 = *(int *)(param_1 + 4);
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    do {
      uVar1 = FUN_00701cf4(&DAT_00700d94,1,*(undefined4 *)(*(int *)(param_2 + 8) + iVar2 * 4));
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return;
}
