// rea decompile_all
// name: FUN_00425ea0
// address: 0x425ea0
// body: available
// range: 0x425ea0-0x425f8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x425ebc (push 0x425f8e followed by fs-segment stack chaining); handler 0x425f8e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00425ea0(undefined2 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 extraout_var;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_28 [4];
  uint local_18;
  uint local_14;
  int local_10;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_28[0] = 0;
  local_8 = 0;
  puStack_34 = &LAB_00425f8e;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  FUN_00428b68(&local_8,param_1);
  FUN_0040840c(local_28,local_8);
  cVar2 = FUN_00416674(local_28[0],&local_14);
  if (cVar2 == '\0') {
    iVar3 = (**(code **)PTR_DAT_006895a4)();
    if (iVar3 == 0) {
      local_10 = (int)local_18 >> 0x1f;
      local_14 = local_18;
    }
    else {
      iVar3 = (**(code **)PTR_DAT_00689084)();
      if (iVar3 == 0) {
        local_14 = FUN_004048b8();
        local_10 = extraout_EDX;
      }
      else if (iVar3 == -0x7ffdfffb) {
        local_14 = FUN_00426800(param_1);
        local_14 = local_14 & 0x7f;
        local_10 = 0;
      }
      else {
        FUN_004246f8(iVar3,*param_1,CONCAT22(extraout_var,0x14));
        local_14 = 0;
        local_10 = 0;
      }
    }
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00425f95;
  puStack_34 = (undefined1 *)0x425f85;
  thunk_FUN_004072d8(local_28,uStack_38,puVar1);
  puStack_34 = (undefined1 *)0x425f8d;
  FUN_00407dd0(&local_8);
  return;
}
