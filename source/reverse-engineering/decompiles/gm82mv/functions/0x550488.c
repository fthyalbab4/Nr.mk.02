// rea decompile_all
// name: FUN_00550488
// address: 0x550488
// body: available
// range: 0x550488-0x550520 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5504a0 (push 0x550521 followed by fs-segment stack chaining); handler 0x550521 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00550488(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_00550521;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar1 = FUN_0055059c(param_1,7);
  if (cVar1 == '\0') {
    FUN_00408194(param_2,0);
  }
  else {
    uVar2 = FUN_00550148(param_1,CONCAT22(extraout_var,7));
    FUN_00407590(&local_8,uVar2,0);
    uStack_20 = 0x5504d4;
    uVar2 = FUN_00407dd0(&local_c);
    uStack_20 = 0x5504de;
    cVar1 = FUN_00534b38(local_8,uVar2);
    uStack_20 = 0x5504ea;
    FUN_0040840c(param_2,local_c);
    if (cVar1 == '\0') {
      uStack_20 = 0x5504f8;
      FUN_004083c0(param_2,local_8);
    }
  }
  *in_FS_OFFSET = puStack_1c;
  puStack_18 = (undefined1 *)0x550518;
  FUN_00407dd0(&local_c,puStack_1c,unaff_ESI);
  puStack_18 = (undefined1 *)0x550520;
  FUN_004072d8(&local_8);
  return;
}
