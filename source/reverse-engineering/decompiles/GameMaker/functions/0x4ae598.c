// rea decompile_all
// name: FUN_004ae598
// address: 0x4ae598
// body: available
// range: 0x4ae598-0x4ae66c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ae5b4 (push 0x4ae66d followed by fs-segment stack chaining); handler 0x4ae66d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ae598(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_004ae66d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar2 = &stack0xfffffffc;
  local_8 = param_2;
  if (param_2 < 0) {
    FUN_0040b75c(PTR_PTR_0078288c,&local_c);
    FUN_004ac6e8(local_c);
    puVar2 = puStack_20;
  }
  puStack_20 = puVar2;
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (uVar3 = *(int *)(param_1 + 0x10) - local_8, uVar5 = (int)uVar3 >> 0x1f,
     1 < (int)((uVar3 ^ uVar5) - uVar5))) {
    iVar4 = FUN_004ae56c(param_1);
    iVar6 = local_8;
    while ((iVar6 != 0 && (iVar4 != 0))) {
      iVar4 = FUN_004ad2a8(iVar4);
      iVar6 = iVar6 + -1;
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x10) == local_8) {
      iVar4 = *piVar1;
    }
    else if (local_8 < *(int *)(param_1 + 0x10)) {
      iVar4 = FUN_004ad328(*piVar1);
    }
    else {
      iVar4 = FUN_004ad2a8(*piVar1);
    }
  }
  if (iVar4 == 0) {
    FUN_0040b75c(PTR_PTR_0078288c,&local_10);
    FUN_004ac6e8(local_10);
  }
  puVar2 = puStack_20;
  *(int *)(param_1 + 0xc) = iVar4;
  *(int *)(param_1 + 0x10) = local_8;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004ae674;
  puStack_24 = (undefined1 *)0x4ae66c;
  thunk_FUN_00406e80(&local_10,2,puVar2);
  return;
}
