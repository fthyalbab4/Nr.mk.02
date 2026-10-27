// rea decompile_all
// name: FUN_005e4e90
// address: 0x5e4e90
// body: available
// range: 0x5e4e90-0x5e4fde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e4eb3 (push 0x5e4fdf followed by fs-segment stack chaining); handler 0x5e4fdf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e4e90(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 char param_6,undefined1 param_7,undefined4 param_8)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_28;
  undefined1 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_34 = &stack0xfffffffc;
  local_20 = 0;
  local_1c = 0;
  puStack_38 = &LAB_005e4fdf;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puVar2 = &stack0xfffffffc;
  local_14 = param_3;
  local_10 = param_1;
  if (param_2 != 0) {
    iVar3 = FUN_005e45ec(param_1,param_2);
    local_8 = FUN_005e4638(local_10,param_4);
    if (iVar3 == -1) {
      local_18 = FUN_004095b8(0x10,&DAT_005e4454);
      FUN_00408194(local_18,param_2);
      FUN_00408194(local_18 + 4,param_8);
      *(undefined1 *)(local_18 + 8) = param_7;
      FUN_00438d04(*(undefined4 *)(local_10 + 8),local_18);
      FUN_005e4dec();
    }
    else if (param_6 == '\0') {
      FUN_0040b9d0(PTR_LAB_00688ec4,&local_20);
      local_24 = 0x11;
      local_28 = param_2;
      FUN_005d8ba0(local_20,&local_28,0);
    }
    else {
      local_18 = FUN_00438ec4(*(undefined4 *)(local_10 + 8),iVar3);
      piVar1 = *(int **)(local_18 + 0xc);
      if (*piVar1 != param_4) {
        FUN_005e4dec();
        piVar1[2] = piVar1[2] + -1;
        if (piVar1[2] == 0) {
          FUN_004390d4(*(undefined4 *)(local_10 + 4),piVar1,0);
        }
      }
    }
    FUN_004081e8(&local_1c,param_8);
    if (local_1c == 0) {
      FUN_004081e8(&local_1c,*(undefined4 *)(local_c + 4));
    }
    FUN_004600f4(&PTR_LAB_00457b10,param_2,local_1c,param_4);
    puVar2 = puStack_34;
  }
  puStack_34 = puVar2;
  puVar2 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005e4fe6;
  puStack_38 = (undefined1 *)0x5e4fde;
  thunk_FUN_004072fc(&local_20,2,puVar2);
  return;
}
