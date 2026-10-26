// rea decompile_all
// name: FUN_0047a09c
// address: 0x47a09c
// body: available
// range: 0x47a09c-0x47a104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47a0b2 (push 0x47a105 followed by fs-segment stack chaining); handler 0x47a105 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a09c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0047a105;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uStack_20 = 0x47a0be;
  FUN_00408194(param_2,0);
  if (*(byte *)(param_1 + 0x2e6) < 2) {
    FUN_004bb658(param_1,&local_8);
    uVar2 = local_8;
    uVar3 = FUN_004791b8(param_1);
    iVar4 = FUN_0047915c(param_1);
    FUN_00408984(uVar2,iVar4 + 1,uVar3);
    uStack_20 = param_2;
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0047a10c;
  uStack_1c = 0x47a104;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
