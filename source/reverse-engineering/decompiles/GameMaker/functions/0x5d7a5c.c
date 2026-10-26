// rea decompile_all
// name: FUN_005d7a5c
// address: 0x5d7a5c
// body: available
// range: 0x5d7a5c-0x5d7b75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d7a74 (push 0x5d7b76 followed by fs-segment stack chaining); handler 0x5d7b76 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d7a5c(int param_1)

{
  undefined1 *puVar1;
  LPVOID *ppvVar2;
  undefined4 uVar3;
  HRESULT HVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_20 = &LAB_005d7b76;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) && (*(int *)(*(int *)(param_1 + 0x270) + 0x28) != 0)
     ) {
    puStack_1c = &stack0xfffffffc;
    ppvVar2 = (LPVOID *)FUN_0040b140(&local_c);
    CoGetClassObject(*(IID **)(local_8 + 0x270),5,(LPVOID)0x0,(IID *)&DAT_005d7b84,ppvVar2);
    FUN_005b641c();
    FUN_00407bdc(&local_10,*(undefined4 *)(*(int *)(local_8 + 0x270) + 0x28));
    FUN_0040b75c(PTR_PTR_007816d0,&local_14);
    uVar5 = local_14;
    FUN_0040b140(local_8 + 0x280);
    uVar3 = (**(code **)(*local_c + 0x1c))();
    FUN_005d79dc(uVar3,uVar5);
  }
  else {
    FUN_0040b75c(PTR_PTR_007825c4,&local_18,0,&stack0xfffffffc);
    uVar5 = local_18;
    ppvVar2 = (LPVOID *)FUN_0040b140(local_8 + 0x280);
    HVar4 = CoCreateInstance(*(IID **)(local_8 + 0x270),(LPUNKNOWN)0x0,5,(IID *)&DAT_005d7b94,
                             ppvVar2);
    FUN_005d79dc(HVar4,uVar5);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005d7b7d;
  puStack_20 = (undefined1 *)0x5d7b65;
  thunk_FUN_00406e80(&local_18,2,puVar1);
  puStack_20 = (undefined1 *)0x5d7b6d;
  FUN_00407a78(&local_10);
  puStack_20 = (undefined1 *)0x5d7b75;
  FUN_0040b140(&local_c);
  return;
}
