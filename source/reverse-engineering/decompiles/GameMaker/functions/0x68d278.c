// rea decompile_all
// name: FUN_0068d278
// address: 0x68d278
// body: available
// range: 0x68d278-0x68d38d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68d298 (push 0x68d38e followed by fs-segment stack chaining); handler 0x68d38e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068d278(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_38 = &stack0xfffffffc;
  local_28 = 0;
  puStack_3c = &LAB_0068d38e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  *(undefined4 *)(param_1 + 0x63c) = param_2;
  FUN_0065751c(*(undefined4 *)(param_1 + 0x61c),param_2,&local_24);
  (**(code **)(**(int **)(param_1 + 0x434) + 0xf0))(*(int **)(param_1 + 0x434),local_24);
  (**(code **)(**(int **)(param_1 + 0x430) + 0xf0))(*(int **)(param_1 + 0x430),local_23);
  *(int *)(param_1 + 0x1620) = local_20;
  if (local_20 < 0) {
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x404),L"<no background>");
  }
  else {
    FUN_0064de38(local_20,&local_28);
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x404),local_28);
  }
  (**(code **)(**(int **)(param_1 + 0x428) + 0xf0))(*(int **)(param_1 + 0x428),local_14);
  (**(code **)(**(int **)(param_1 + 0x42c) + 0xf0))(*(int **)(param_1 + 0x42c),local_13);
  (**(code **)(**(int **)(param_1 + 0x558) + 0xf0))(*(int **)(param_1 + 0x558),local_8);
  FUN_00530760(*(undefined4 *)(param_1 + 0x41c),local_1c);
  FUN_00530760(*(undefined4 *)(param_1 + 0x424),local_18);
  FUN_00530760(*(undefined4 *)(param_1 + 0x410),local_10);
  FUN_00530760(*(undefined4 *)(param_1 + 0x414),local_c);
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0068d395;
  puStack_3c = (undefined1 *)0x68d38d;
  thunk_FUN_00406e5c(&local_28,uStack_40,puVar1);
  return;
}
