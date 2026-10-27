// rea decompile_all
// name: FUN_0041db58
// address: 0x41db58
// body: available
// range: 0x41db58-0x41dc25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41db82 (push 0x41dc26 followed by fs-segment stack chaining); handler 0x41dc26 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041db58(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  puStack_1c = (undefined1 *)0x41db6f;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = (undefined1 *)0x41db77;
  thunk_FUN_00407660(local_c);
  puStack_20 = &LAB_0041dc26;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = local_c;
  puStack_1c = &stack0xfffffffc;
  if ((local_c != 0) && (puStack_1c = &stack0xfffffffc, *(short *)(local_c + -10) != 2)) {
    puStack_1c = &stack0xfffffffc;
    iVar2 = FUN_00407048(&local_c,local_c);
  }
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = *(undefined4 *)(iVar2 + -4);
  }
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  uVar6 = 0;
  if (iVar2 != 0) {
    uVar6 = *(undefined4 *)(iVar2 + -4);
  }
  uVar3 = FUN_00407f44(local_8);
  uVar4 = FUN_00407f44(local_c);
  iVar2 = FUN_00417adc(uVar4,uVar3,uVar5,uVar6);
  if (iVar2 != 0) {
    FUN_00407f44(local_c);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0041dc2d;
  puStack_20 = (undefined1 *)0x41dc25;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
