// rea decompile_all
// name: FUN_0061365c
// address: 0x61365c
// body: available
// range: 0x61365c-0x61383b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x613686 (push 0x61383c followed by fs-segment stack chaining); handler 0x61383c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061365c(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 local_dc [40];
  undefined1 local_b4 [40];
  undefined1 local_8c [40];
  undefined1 local_64 [40];
  undefined1 local_3c [8];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;

  puStack_24 = &stack0xfffffffc;
  iVar1 = 0x1a;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  LOCK();
  UNLOCK();
  puStack_28 = &LAB_0061383c;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  *PTR_PTR_00688e10 = 0;
  _ImgDelayDescr_Module_Handle_00000000 = *param_2;
  uStack_30 = 0x6136a4;
  uStack_30 = FUN_00409c34(param_2[1]);
  uStack_34 = 0x6136bb;
  FUN_00409dfc(4,&DAT_00613154,1);
  local_14 = *param_2;
  if (-1 < local_14 + -1) {
    iVar1 = 0;
    do {
      if ((*(int *)(param_2[1] + iVar1 * 0xc) == 0) &&
         (*(int *)(param_2[1] + 0xc + iVar1 * 0xc) == 0x6a)) {
        uStack_30 = 0x6136f6;
        FUN_00613234(param_1,param_2[1] + iVar1 * 0xc,local_3c);
        uStack_30 = 0x613710;
        FUN_00409360(iRam00000004 + iVar1 * 0x28,local_3c,&DAT_006130ec);
      }
      else if (*(int *)(param_2[1] + iVar1 * 0xc) == 0) {
        uStack_30 = 0x613732;
        FUN_0061332c(param_1,param_2[1] + iVar1 * 0xc,local_64);
        uStack_30 = 0x61374c;
        FUN_00409360(iRam00000004 + iVar1 * 0x28,local_64,&DAT_006130ec);
      }
      else if (*(int *)(param_2[1] + iVar1 * 0xc) == 1) {
        uStack_30 = 0x613771;
        FUN_006133e8(param_1,param_2[1] + iVar1 * 0xc,local_8c);
        uStack_30 = 0x61378e;
        FUN_00409360(iRam00000004 + iVar1 * 0x28,local_8c,&DAT_006130ec);
      }
      else if (*(int *)(param_2[1] + iVar1 * 0xc) == 2) {
        uStack_30 = 0x6137b0;
        FUN_006135e0(param_1,param_2[1] + iVar1 * 0xc,local_b4);
        uStack_30 = 0x6137cd;
        FUN_00409360(iRam00000004 + iVar1 * 0x28,local_b4,&DAT_006130ec);
      }
      else {
        uStack_30 = 0x6137e3;
        FUN_006131d0(param_1,param_2[1] + iVar1 * 0xc,local_dc);
        uStack_30 = 0x613800;
        FUN_00409360(iRam00000004 + iVar1 * 0x28,local_dc,&DAT_006130ec);
      }
      if (*PTR_PTR_00688e10 != '\0') break;
      iVar1 = iVar1 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00613843;
  puStack_28 = (undefined1 *)0x61383b;
  FUN_00409120(local_dc,&DAT_006130ec,5);
  return;
}
