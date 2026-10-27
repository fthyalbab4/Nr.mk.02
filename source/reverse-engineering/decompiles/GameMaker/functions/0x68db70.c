// rea decompile_all
// name: FUN_0068db70
// address: 0x68db70
// body: available
// range: 0x68db70-0x68dcad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68db90 (push 0x68dcae followed by fs-segment stack chaining); handler 0x68dcae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068db70(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_50 = &stack0xfffffffc;
  local_40 = 0;
  puStack_54 = &LAB_0068dcae;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  *(undefined4 *)(param_1 + 0x1624) = param_2;
  FUN_00657574(*(undefined4 *)(param_1 + 0x61c),param_2,local_3c);
  (**(code **)(**(int **)(param_1 + 0x444) + 0xf0))(*(int **)(param_1 + 0x444),local_3c[0]);
  FUN_00530760(*(undefined4 *)(param_1 + 0x560),local_38);
  FUN_00530760(*(undefined4 *)(param_1 + 0x564),local_34);
  FUN_00530760(*(undefined4 *)(param_1 + 0x56c),local_30);
  FUN_00530760(*(undefined4 *)(param_1 + 0x568),local_2c);
  FUN_00530760(*(undefined4 *)(param_1 + 0x574),local_28);
  FUN_00530760(*(undefined4 *)(param_1 + 0x578),local_24);
  FUN_00530760(*(undefined4 *)(param_1 + 0x580),local_20);
  FUN_00530760(*(undefined4 *)(param_1 + 0x57c),local_1c);
  FUN_00530760(*(undefined4 *)(param_1 + 0x590),local_18);
  FUN_00530760(*(undefined4 *)(param_1 + 0x58c),local_14);
  FUN_00530760(*(undefined4 *)(param_1 + 0x594),local_10);
  FUN_00530760(*(undefined4 *)(param_1 + 0x598),local_c);
  *(int *)(param_1 + 0x1628) = local_8;
  if (local_8 < 0) {
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x59c),L"<no object>");
  }
  else {
    FUN_0062cabc(local_8,&local_40);
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x59c),local_40);
  }
  puVar1 = puStack_50;
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_0068dcb5;
  puStack_54 = (undefined1 *)0x68dcad;
  thunk_FUN_00406e5c(&local_40,uStack_58,puVar1);
  return;
}
