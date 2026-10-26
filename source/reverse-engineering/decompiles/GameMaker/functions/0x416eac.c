// rea decompile_all
// name: FUN_00416eac
// address: 0x416eac
// body: available
// range: 0x416eac-0x416fae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x416ecc (push 0x416faf followed by fs-segment stack chaining); handler 0x416faf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416eac(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_1c = (undefined1 *)0x416ec1;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_00416faf;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (local_8 == 0) {
    puStack_1c = &stack0xfffffffc;
    iVar2 = FUN_0041bfec(&PTR_LAB_004114b0,1,PTR_PTR_007828c0);
    *(undefined4 *)(iVar2 + 0x18) = 3;
    FUN_00406618(iVar2);
  }
  FUN_0041db08(local_8,&local_c);
  FUN_00407f0c(&local_8,local_c);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (iVar3 < 3) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = FUN_00416e88(local_8);
  }
  cVar4 = cVar4 == '\0';
  if ((bool)cVar4) {
    FUN_0041735c(local_8,&local_10);
    FUN_00408640(local_10,local_8);
  }
  else {
    cVar4 = '\x01';
  }
  if (cVar4 == '\0') {
    FUN_0041735c(local_8,&local_14);
    cVar4 = FUN_00416eac(local_14);
    if (cVar4 != '\0') {
      FUN_0041760c(local_8);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00416fb6;
  puStack_20 = (undefined1 *)0x416fae;
  thunk_FUN_00406e80(&local_14,4,puVar1);
  return;
}
