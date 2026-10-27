// rea decompile_all
// name: FUN_004638e0
// address: 0x4638e0
// body: available
// range: 0x4638e0-0x463940 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x463913 (push 0x463941 followed by fs-segment stack chaining); handler 0x463941 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004638e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x4638f4;
  FUN_004635b0(param_1);
  puStack_1c = (undefined1 *)0x2;
  uStack_20 = 0x463905;
  puStack_18 = (undefined1 *)param_3;
  puVar2 = (undefined4 *)FUN_0043d6bc(&LAB_00431c14,1,param_2);
  puStack_1c = &LAB_00463941;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  uVar3 = (**(code **)*puVar2)();
  FUN_00463b0c(param_1,puVar2,uVar3);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = 0;
  puStack_1c = &LAB_00463948;
  uStack_20 = 0x463940;
  FUN_00405fdc(puVar2,0,puVar1);
  return;
}
