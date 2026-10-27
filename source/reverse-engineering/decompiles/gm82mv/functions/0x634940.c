// rea decompile_all
// name: FUN_00634940
// address: 0x634940
// body: available
// range: 0x634940-0x634a2a inclusive
// range: 0x634a4c-0x634a7a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x63497f (push 0x634a7b followed by fs-segment stack chaining); handler 0x634a7b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6349f8 (push 0x634a2b followed by fs-segment stack chaining); handler 0x634a2b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00634940(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 *in_stack_00000004;
  int *in_stack_0000000c;
  undefined4 uStack_fc;
  undefined1 *puStack_f8;
  undefined1 *puStack_f4;
  undefined4 local_f0;
  undefined1 *puStack_ec;
  undefined1 *puStack_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined1 local_cc [4];
  undefined2 local_c8;

  local_d8 = 0;
  local_d0 = 0;
  local_d4 = 0;
  puStack_e8 = (undefined1 *)0x634974;
  FUN_00408ff8(local_cc,&DAT_0041258c);
  puStack_ec = &LAB_00634a7b;
  local_f0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_f0;
  puStack_f4 = (undefined1 *)0x63498f;
  puStack_e8 = &stack0xfffffffc;
  FUN_0041dfbc(0,local_cc);
  local_c8 = 0x2e;
  *in_stack_00000004 = 0;
  if (*in_stack_0000000c == 0) {
    in_stack_00000004[2] = in_stack_0000000c[2];
    in_stack_00000004[3] = in_stack_0000000c[3];
  }
  else {
    puStack_f4 = (undefined1 *)0x6349c6;
    FUN_004083c0(&local_d4,in_stack_0000000c[4]);
    puStack_f4 = (undefined1 *)0x6349d7;
    FUN_00415c04(local_d4,&local_d0);
    if (local_d0 == 0) {
      in_stack_00000004[2] = 0;
      in_stack_00000004[3] = 0;
    }
    else {
      puStack_f8 = &LAB_00634a2b;
      uStack_fc = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_fc;
      puStack_f4 = &stack0xfffffffc;
      FUN_004083c0(&local_d8,in_stack_0000000c[4]);
      FUN_00418f78(local_d8,local_cc);
      *(double *)(in_stack_00000004 + 2) = (double)in_ST0;
      *in_FS_OFFSET = uStack_fc;
    }
  }
  puVar1 = puStack_e8;
  *in_FS_OFFSET = local_f0;
  puStack_e8 = &LAB_00634a82;
  puStack_ec = (undefined1 *)0x634a69;
  thunk_FUN_004072fc(&local_d8,3,puVar1);
  puStack_ec = (undefined1 *)0x634a7a;
  FUN_004090d0(local_cc,&DAT_0041258c);
  return;
}
