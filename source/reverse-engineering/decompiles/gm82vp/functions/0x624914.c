// rea decompile_all
// name: FUN_00624914
// address: 0x624914
// body: available
// range: 0x624914-0x6249c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00624914(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 local_20 [16];

  FUN_00409dfc(param_1 + 8,&DAT_00622864,1,*(int *)(param_2 + 4) + *(int *)(param_1 + 4));
  iVar6 = *(int *)(param_2 + 4);
  if (-1 < iVar6 + -1) {
    iVar5 = 0;
    do {
      uVar2 = FUN_00515ac8(&DAT_00514cd4,1,*(undefined4 *)(*(int *)(param_2 + 8) + iVar5 * 4),1);
      iVar4 = *(int *)(param_1 + 4) + iVar5;
      iVar1 = *(int *)(param_1 + 8);
      *(undefined4 *)(iVar1 + iVar4 * 4) = uVar2;
      uVar7 = 1;
      uVar2 = FUN_00623b30(param_1,iVar4,iVar1,1);
      uVar3 = FUN_00623b18(param_1);
      FUN_00515e38(*(undefined4 *)(*(int *)(param_1 + 8) + (*(int *)(param_1 + 4) + iVar5) * 4),
                   uVar3,uVar2,uVar7);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(param_2 + 4);
  FUN_00624a08(param_1);
  FUN_00436ad0(0,0,0,local_20,0);
  FUN_00623c28(param_1,*(undefined1 *)(param_1 + 0x28),0,0,0,local_20);
  return;
}
