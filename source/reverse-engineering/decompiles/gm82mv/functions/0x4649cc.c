// rea decompile_all
// name: FUN_004649cc
// address: 0x4649cc
// body: available
// range: 0x4649cc-0x464a45 inclusive
// range: 0x464a60-0x464a68 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x464a29 (push 0x464a46 followed by fs-segment stack chaining); handler 0x464a46 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004649cc(int param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined4 *puStack_70;
  undefined4 local_60 [5];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_c;

  bVar6 = 0;
  *param_2 = 2;
  puStack_70 = (undefined4 *)0x4649e6;
  local_c = param_3;
  FUN_004635c0(param_1);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar4 = (undefined4 *)(iVar1 + 0x18);
  puVar5 = local_60;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  local_48 = 0;
  local_4c = 0;
  puStack_70 = local_60;
  uStack_74 = *(undefined4 *)(param_1 + 0x2c);
  puStack_78 = (undefined1 *)0x464a19;
  uVar2 = FUN_00461f30(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),
                       *(undefined4 *)(iVar1 + 0x10));
  *local_c = uVar2;
  puStack_7c = &LAB_00464a46;
  uStack_80 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_80;
  puStack_78 = &stack0xfffffffc;
  uVar2 = FUN_00462594(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10));
  *param_4 = uVar2;
  *in_FS_OFFSET = uStack_80;
  return;
}
