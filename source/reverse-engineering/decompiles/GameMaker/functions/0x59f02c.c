// rea decompile_all
// name: FUN_0059f02c
// address: 0x59f02c
// body: available
// range: 0x59f02c-0x59f17a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59f04f (push 0x59f17b followed by fs-segment stack chaining); handler 0x59f17b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059f02c(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
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
  puStack_38 = &LAB_0059f17b;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puVar2 = &stack0xfffffffc;
  local_14 = param_3;
  local_10 = param_1;
  if (param_2 != 0) {
    iVar3 = FUN_0059e788(param_1,param_2);
    local_8 = FUN_0059e7d4(local_10,param_4);
    if (iVar3 == -1) {
      local_18 = FUN_004092dc(0x10,&DAT_0059e5f0);
      FUN_00407eb8(local_18,param_2);
      FUN_00407eb8(local_18 + 4,param_8);
      *(undefined1 *)(local_18 + 8) = param_7;
      FUN_0043ae88(*(undefined4 *)(local_10 + 8),local_18);
      FUN_0059ef88();
    }
    else if (param_6 == '\0') {
      FUN_0040b75c(PTR_PTR_00781ed8,&local_20);
      local_24 = 0x11;
      local_28 = param_2;
      FUN_00592d3c(local_20,&local_28,0);
    }
    else {
      local_18 = FUN_0043b048(*(undefined4 *)(local_10 + 8),iVar3);
      piVar1 = *(int **)(local_18 + 0xc);
      if (*piVar1 != param_4) {
        FUN_0059ef88();
        piVar1[2] = piVar1[2] + -1;
        if (piVar1[2] == 0) {
          FUN_0043b258(*(undefined4 *)(local_10 + 4),piVar1,0);
        }
      }
    }
    FUN_00407f0c(&local_1c,param_8);
    if (local_1c == 0) {
      FUN_00407f0c(&local_1c,*(undefined4 *)(local_c + 4));
    }
    FUN_0045fa34(&PTR_LAB_00457450,param_2,local_1c,param_4);
    puVar2 = puStack_34;
  }
  puStack_34 = puVar2;
  puVar2 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0059f182;
  puStack_38 = (undefined1 *)0x59f17a;
  thunk_FUN_00406e80(&local_20,2,puVar2);
  return;
}
