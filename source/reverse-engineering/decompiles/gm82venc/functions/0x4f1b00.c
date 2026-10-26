// rea decompile_all
// name: FUN_004f1b00
// address: 0x4f1b00
// body: available
// range: 0x4f1b00-0x4f1c2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f1b2d (push 0x4f1c2e followed by fs-segment stack chaining); handler 0x4f1c2e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f1b00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 int *param_6)

{
  int iVar1;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  undefined4 local_150;
  undefined1 local_14c [256];
  undefined4 local_4c;
  int local_48;
  undefined1 *local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_14;
  undefined1 local_d;
  undefined4 local_c;
  int local_8;

  puStack_160 = &stack0xfffffffc;
  local_150 = 0;
  puStack_164 = &LAB_004f1c2e;
  uStack_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_168;
  local_d = 1;
  *param_5 = 0;
  local_c = param_3;
  local_8 = param_2;
  FUN_00404f38(&local_4c,0x38,0);
  FUN_00466d5c(&local_4c,local_c,L"1.2.3",0x38);
  local_48 = local_8;
  local_4c = param_1;
  do {
    while( true ) {
      if (local_48 < 1) {
        FUN_00467bf8(&local_4c);
        goto LAB_004f1c15;
      }
      if (local_3c == 0) {
        local_40 = local_14c;
        local_3c = 0x100;
      }
      iVar1 = FUN_00467384(&local_4c,4);
      if ((iVar1 != 1) && (iVar1 != 0)) break;
      *param_5 = *param_5 + local_38;
      if (*param_6 == 0) {
        iVar1 = FUN_00404324(*param_5);
        *param_6 = iVar1;
      }
      else {
        FUN_00404358(param_6,*param_5);
      }
      local_14 = (*param_6 + *param_5) - local_38;
      FUN_00404514(local_14c,local_14,local_38);
    }
  } while (-1 < iVar1);
  local_d = 0;
  FUN_00407590(&local_150,local_34,0);
  uStack_168 = 0x4f1bf9;
  FUN_004083c0(param_4,local_150);
  uStack_168 = 0x4f1c01;
  FUN_00467bf8(&local_4c);
LAB_004f1c15:
  *in_FS_OFFSET = puStack_164;
  puStack_160 = (undefined1 *)0x4f1c2d;
  FUN_004072d8(&local_150,puStack_164,unaff_EDI);
  return;
}
