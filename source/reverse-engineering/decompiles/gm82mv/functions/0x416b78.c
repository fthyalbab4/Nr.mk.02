// rea decompile_all
// name: FUN_00416b78
// address: 0x416b78
// body: available
// range: 0x416b78-0x416c7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x416b98 (push 0x416c7b followed by fs-segment stack chaining); handler 0x416c7b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416b78(int param_1)

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
  puStack_1c = (undefined1 *)0x416b8d;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_00416c7b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (local_8 == 0) {
    puStack_1c = &stack0xfffffffc;
    iVar2 = FUN_0041be80(&LAB_00411310,1,PTR_LAB_006895fc);
    *(undefined4 *)(iVar2 + 0x18) = 3;
    FUN_00406ab4(iVar2);
  }
  FUN_0041d94c(local_8,&local_c);
  FUN_004081e8(&local_8,local_c);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (iVar3 < 3) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = FUN_00416b54(local_8);
  }
  cVar4 = cVar4 == '\0';
  if ((bool)cVar4) {
    FUN_00417028(local_8,&local_10);
    FUN_0040891c(local_10,local_8);
  }
  else {
    cVar4 = '\x01';
  }
  if (cVar4 == '\0') {
    FUN_00417028(local_8,&local_14);
    cVar4 = FUN_00416b78(local_14);
    if (cVar4 != '\0') {
      FUN_004175c0(local_8);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00416c82;
  puStack_20 = (undefined1 *)0x416c7a;
  thunk_FUN_004072fc(&local_14,4,puVar1);
  return;
}
