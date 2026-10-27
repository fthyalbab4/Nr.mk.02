// rea decompile_all
// name: FUN_0061332c
// address: 0x61332c
// body: available
// range: 0x61332c-0x6133d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x613366 (push 0x6133d7 followed by fs-segment stack chaining); handler 0x6133d7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061332c(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 local_2c [28];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  puStack_3c = (undefined1 *)0x61334d;
  FUN_0040923c(&local_10,&DAT_00611918);
  puStack_3c = (undefined1 *)0x61335b;
  FUN_00408ff8(local_2c,&DAT_00615f70);
  puStack_40 = &LAB_006133d7;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  cVar2 = FUN_00585038(local_c,local_2c);
  if (cVar2 == '\0') {
    *param_3 = 7;
    uVar3 = FUN_0061e30c(local_c);
    param_3[1] = uVar3;
  }
  else {
    *param_3 = 5;
    param_3[1] = 0;
    FUN_00409360(param_3 + 2,local_2c,&DAT_00615f70);
  }
  puVar1 = puStack_3c;
  param_3[8] = local_8;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_006133de;
  puStack_40 = (undefined1 *)0x6133c8;
  FUN_004090d0(local_2c,&DAT_00615f70,puVar1);
  puStack_40 = (undefined1 *)0x6133d6;
  FUN_004090d0(&local_10,&DAT_00611918);
  return;
}
