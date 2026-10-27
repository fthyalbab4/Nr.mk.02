// rea decompile_all
// name: FUN_0059f0f8
// address: 0x59f0f8
// body: available
// range: 0x59f0f8-0x59f162 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59f116 (push 0x59f163 followed by fs-segment stack chaining); handler 0x59f163 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059f0f8(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int *local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0059f163;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  iVar3 = FUN_0043f588(param_2);
  puVar1 = puStack_1c;
  for (; 0 < iVar3; iVar3 = iVar3 + -1) {
    uVar5 = 0;
    puStack_1c = puVar1;
    FUN_004404f0(param_2,&local_c);
    uVar2 = local_c;
    uVar4 = FUN_0043f588(param_2);
    (**(code **)(*local_8 + 100))(local_8,uVar4,uVar2,uVar5);
    puVar1 = puStack_1c;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0059f16a;
  puStack_20 = (undefined1 *)0x59f162;
  thunk_FUN_004072d8(&local_c,uStack_24,puVar1);
  return;
}
