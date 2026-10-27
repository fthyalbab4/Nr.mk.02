// rea decompile_all
// name: FUN_00726b9c
// address: 0x726b9c
// body: available
// range: 0x726b9c-0x726c98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x726bbf (push 0x726c99 followed by fs-segment stack chaining); handler 0x726c99 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00726b9c(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5
                 )

{
  int iVar1;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_48;
  undefined4 local_41;
  undefined4 local_3d;
  int local_35;
  int local_31;
  int local_2d;
  undefined4 local_29;
  undefined1 local_9;
  undefined4 local_8;

  puStack_58 = &stack0xfffffffc;
  local_48 = 0;
  puStack_5c = &LAB_00726c99;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_9 = 1;
  *param_5 = 0;
  local_8 = param_2;
  FUN_00404f08(&local_41,0x38,0);
  FUN_00469548(&local_41,L"1.2.3",0x38);
  local_3d = local_8;
  local_41 = param_1;
  while( true ) {
    if (local_31 == 0) {
      *param_5 = *param_5 + 0x100;
      if (*param_3 == 0) {
        iVar1 = FUN_0040431c(*param_5);
        *param_3 = iVar1;
      }
      else {
        FUN_00404350(param_3,*param_5);
      }
      local_35 = *param_3 + local_2d;
      local_31 = 0x100;
    }
    iVar1 = FUN_0046967c(&local_41,0);
    if (iVar1 == 1) {
      *param_5 = local_2d;
      FUN_00404350(param_3,*param_5);
    }
    if (iVar1 < 0) break;
    if (iVar1 == 1) {
      FUN_0046ab48(&local_41);
LAB_00726c83:
      *in_FS_OFFSET = puStack_5c;
      puStack_58 = (undefined1 *)0x726c98;
      FUN_00406e5c(&local_48,puStack_5c,unaff_EDI);
      return;
    }
  }
  local_9 = 0;
  FUN_00407140(&local_48,local_29,0);
  uStack_60 = 0x726c6a;
  FUN_004080e4(param_4,local_48);
  uStack_60 = 0x726c72;
  FUN_0046ab48(&local_41);
  goto LAB_00726c83;
}
