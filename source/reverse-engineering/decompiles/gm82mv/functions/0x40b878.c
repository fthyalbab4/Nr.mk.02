// rea decompile_all
// name: FUN_0040b878
// address: 0x40b878
// body: available
// range: 0x40b878-0x40b905 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40b88f (push 0x40b906 followed by fs-segment stack chaining); handler 0x40b906 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040b878(LPCSTR param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0040b906;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00408194(param_2,0);
  bVar5 = param_1 == (LPCSTR)0x0;
  if (!bVar5) {
    bVar5 = *param_1 == '\0';
  }
  if (!bVar5) {
    iVar2 = lstrlenA(param_1);
    FUN_00408520(&local_8,iVar2);
    iVar4 = iVar2;
    uVar3 = FUN_00408220(local_8);
    iVar4 = FUN_0040b424(uVar3,iVar2 + 1,param_1,iVar4);
    if (iVar4 < 1) {
      FUN_004081e8(&local_8,0);
    }
    else {
      FUN_00408520(&local_8,iVar4 + -1);
    }
    FUN_00408194(param_2,local_8);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0040b90d;
  puStack_1c = (undefined1 *)0x40b905;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
