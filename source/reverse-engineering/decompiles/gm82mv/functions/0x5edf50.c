// rea decompile_all
// name: FUN_005edf50
// address: 0x5edf50
// body: available
// range: 0x5edf50-0x5edff4 inclusive
// range: 0x5ee00c-0x5ee021 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5edf6c (push 0x5ee022 followed by fs-segment stack chaining); handler 0x5ee022 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5edfaf (push 0x5edff5 followed by fs-segment stack chaining); handler 0x5edff5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005edf50(int param_1)

{
  undefined1 *puVar1;
  HGLOBAL pvVar2;
  LPSTREAM *ppstm;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_005ee022;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_005ee308(param_1);
  if (*(int *)(param_1 + 0x284) != 0) {
    uStack_30 = 0x5edf90;
    pvVar2 = GlobalAlloc(2,0);
    *(HGLOBAL *)(param_1 + 0x27c) = pvVar2;
    if (pvVar2 == (HGLOBAL)0x0) {
      FUN_0041bd40();
    }
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    ppstm = (LPSTREAM *)FUN_0040b268(&local_8);
    CreateStreamOnHGlobal(*(HGLOBAL *)(param_1 + 0x27c),0,ppstm);
    FUN_005365fc();
    (**(code **)(**(int **)(param_1 + 0x284) + 0x18))();
    FUN_005365fc();
    *in_FS_OFFSET = uStack_30;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005ee029;
  puStack_20 = (undefined1 *)0x5ee021;
  FUN_0040b268(&local_8,uStack_24,puVar1);
  return;
}
