// rea decompile_all
// name: FUN_0051d410
// address: 0x51d410
// body: available
// range: 0x51d410-0x51d486 inclusive
// range: 0x51d48e-0x51d492 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51d448 (push 0x51d487 followed by fs-segment stack chaining); handler 0x51d487 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051d410(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [16];
  int local_8;

  if (*(short *)(param_1 + 0x90) != 0) {
    *(uint *)(param_1 + 0x92) = *(uint *)(param_1 + 0x92) | 0x10;
    return;
  }
  puStack_20 = (undefined1 *)0x51d43d;
  local_8 = param_1;
  FUN_0051cf6c(param_1);
  puStack_24 = &LAB_0051d487;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  SystemParametersInfoW(0x30,0,local_18,0);
  FUN_0051d388(local_8,param_2,local_18);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x51d48e;
  *(uint *)(local_8 + 0x92) = *(uint *)(local_8 + 0x92) & 0xffffffef;
  puStack_24 = (undefined1 *)0x51d486;
  FUN_0051cf74(local_8,uStack_28,puVar1);
  return;
}
