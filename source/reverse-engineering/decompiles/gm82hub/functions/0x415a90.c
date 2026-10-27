// rea decompile_all
// name: FUN_00415a90
// address: 0x415a90
// body: available
// range: 0x415a90-0x415b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x415ab9 (push 0x415b4c followed by fs-segment stack chaining); handler 0x415b4c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415a90(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  PCNZWCH lpString2;
  PCNZWCH lpString1;
  int cchCount1;
  int cchCount2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  int local_8;

  puStack_18 = (undefined1 *)0x415aa6;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_18 = (undefined1 *)0x415aae;
  thunk_FUN_00407ad0(local_c);
  puStack_1c = &LAB_00415b4c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar2 = local_8;
  puStack_18 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_18 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_18 = &stack0xfffffffc;
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  cchCount1 = 0;
  if (iVar2 != 0) {
    cchCount1 = *(int *)(iVar2 + -4);
  }
  iVar2 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
    iVar2 = FUN_00407488(&local_c,local_c);
  }
  cchCount2 = 0;
  if (iVar2 != 0) {
    cchCount2 = *(int *)(iVar2 + -4);
  }
  lpString2 = (PCNZWCH)FUN_00408220(local_c);
  lpString1 = (PCNZWCH)FUN_00408220(local_8);
  CompareStringW(0x400,1,lpString1,cchCount1,lpString2,cchCount2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00415b53;
  puStack_1c = (undefined1 *)0x415b4b;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
