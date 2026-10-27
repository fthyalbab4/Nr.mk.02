// rea decompile_all
// name: FUN_005c083c
// address: 0x5c083c
// body: available
// range: 0x5c083c-0x5c08fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c085e (push 0x5c08fb followed by fs-segment stack chaining); handler 0x5c08fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c083c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  int local_10;
  undefined1 local_c;
  int local_8;

  local_14 = 0;
  puStack_1c = (undefined1 *)0x5c0853;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_005c08fb;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (local_8 == 0) {
    puStack_1c = &stack0xfffffffc;
    FUN_00407f0c(&local_8,DAT_00789b5c);
  }
  if (local_8 == 0) {
    FUN_005c07ec();
    iVar2 = FUN_005c099c();
    if (0 < iVar2) {
      uVar3 = FUN_005c07ec();
      iVar2 = FUN_005c0b84(uVar3,0);
      goto LAB_005c08a8;
    }
  }
  uVar3 = FUN_005c07ec();
  iVar2 = FUN_005c09a8(uVar3,local_8);
LAB_005c08a8:
  if (iVar2 == 0) {
    local_10 = local_8;
    local_c = 0x11;
    piVar4 = &local_10;
    uVar3 = 0;
    FUN_0040b75c(PTR_PTR_00781650,&local_14);
    FUN_0041bef4(&PTR_LAB_00410b4c,1,local_14,uVar3,piVar4);
    FUN_00406618();
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005c0902;
  puStack_20 = (undefined1 *)0x5c08f2;
  thunk_FUN_00406e5c(&local_14,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x5c08fa;
  thunk_FUN_00406e5c(&local_8);
  return;
}
