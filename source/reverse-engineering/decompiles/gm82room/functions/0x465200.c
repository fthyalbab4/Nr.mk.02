// rea decompile_all
// name: FUN_00465200
// address: 0x465200
// body: available
// range: 0x465200-0x46523f inclusive
// range: 0x465257-0x465270 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x465227 (push 0x465240 followed by fs-segment stack chaining); handler 0x465240 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465200(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;

  uStack_18 = 0x465219;
  iVar1 = FUN_00405fac(&PTR_LAB_004596b4,1);
  puStack_1c = &LAB_00465240;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 8) = param_3;
  *in_FS_OFFSET = uStack_20;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  uStack_18 = 0x465265;
  FUN_00461d58(*(undefined4 *)(param_1 + 0x28),uStack_20,&stack0xfffffffc);
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}
