// rea decompile_all
// name: FUN_0075ddf0
// address: 0x75ddf0
// body: available
// range: 0x75ddf0-0x75dfc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75de1b (push 0x75dfc7 followed by fs-segment stack chaining); handler 0x75dfc7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0075ddf0(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int *piStack_50;
  int iStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int local_34;
  int local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  int local_8;

  local_8 = 0;
  puStack_44 = (undefined1 *)0x75de10;
  FUN_00408d1c(local_2c,&DAT_007568dc);
  puStack_48 = &LAB_0075dfc7;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  piStack_50 = (int *)0x75de25;
  puStack_44 = &stack0xfffffffc;
  iVar3 = FUN_0075dd4c(param_2);
  if (iVar3 != 0) {
    FUN_0075c220(iVar3,local_2c);
    piStack_50 = (int *)0x75de46;
    iVar3 = FUN_00415924(local_28,L"system");
    if (iVar3 == 0) {
      FUN_00407f0c(&local_8,local_24);
      piStack_50 = (int *)0x75de66;
      iVar3 = FUN_00408a68(&DAT_0075e000,local_8);
      if (0 < iVar3) {
        local_34 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          local_34 = FUN_00407048(&local_8,local_8);
        }
        if (local_34 != 0) {
          local_34 = *(int *)(local_34 + -4);
        }
        piStack_50 = &local_8;
        FUN_004086a8(local_8,iVar3 + 1,local_34 - iVar3);
      }
      iVar3 = FUN_00415924(local_8,L"@HandleAnyException");
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 4) = 2;
      }
      else {
        iVar3 = FUN_00415924(local_8,L"@HandleOnException");
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 4) = 3;
        }
        else {
          iVar3 = FUN_00415924(local_8,L"@HandleAutoException");
          if (iVar3 == 0) {
            *(undefined1 *)(param_1 + 4) = 4;
          }
          else {
            iVar3 = FUN_00415924(local_8,L"@HandleFinally");
            if (iVar3 == 0) {
              *(undefined1 *)(param_1 + 4) = 1;
            }
          }
        }
      }
    }
    if (*(char *)(param_1 + 4) == '\0') {
      iVar3 = FUN_0075dd4c(param_2);
      *(int *)(param_1 + 0xc) = iVar3;
      if (iVar3 == 0) {
        *(int *)(param_1 + 0xc) = param_2;
      }
    }
    else {
      iVar3 = FUN_0075dd4c(param_2 + 5);
      *(int *)(param_1 + 0xc) = iVar3;
      if (iVar3 == 0) {
        *(int *)(param_1 + 0xc) = param_2 + 5;
      }
    }
    if (*(char *)(param_1 + 4) == '\x03') {
      FUN_00409be0(param_1 + 0x10,&DAT_00758280,1,*(undefined4 *)(param_2 + 5));
      local_30 = *(int *)(param_2 + 5);
      if (-1 < local_30 + -1) {
        iVar3 = 0;
        do {
          if (*(int *)(param_2 + 9 + iVar3 * 8) == 0) {
            FUN_00409be0(param_1 + 0x10,&DAT_00758280,1,iVar3);
            break;
          }
          iVar1 = *(int *)(param_1 + 0x10);
          *(undefined4 *)(iVar1 + iVar3 * 8) = *(undefined4 *)(param_2 + 9 + iVar3 * 8);
          *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = *(undefined4 *)(param_2 + 0xd + iVar3 * 8);
          iVar3 = iVar3 + 1;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
      }
    }
  }
  puVar2 = puStack_48;
  *in_FS_OFFSET = (int)piStack_50;
  puStack_48 = &LAB_0075dfce;
  iStack_4c = 0x75dfbe;
  FUN_00408df4(local_2c,&DAT_007568dc,puVar2);
  iStack_4c = 0x75dfc6;
  thunk_FUN_00406e5c(&local_8);
  return;
}
