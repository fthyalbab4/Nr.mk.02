// rea decompile_all
// name: FUN_006ae3bc
// address: 0x6ae3bc
// body: available
// range: 0x6ae3bc-0x6ae543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ae3e7 (push 0x6ae544 followed by fs-segment stack chaining); handler 0x6ae544 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ae3bc(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int local_8;

  puStack_18 = (undefined1 *)0x6ae3d4;
  local_c = param_3;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = (undefined1 *)0x6ae3dc;
  thunk_FUN_00407660(local_c);
  puStack_1c = &LAB_006ae544;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (DAT_0077f3d8 == '\0') {
    DAT_0077f3d8 = '\x01';
    DAT_0077f3e0 = 0;
    DAT_0077f3dc = 1;
    if (param_2 < 1) {
      param_2 = 1;
    }
    iVar2 = local_8;
    puStack_18 = &stack0xfffffffc;
    if ((local_8 != 0) && (puStack_18 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
      puStack_18 = &stack0xfffffffc;
      iVar2 = FUN_00407048(&local_8,local_8);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    if (iVar3 < param_2) {
      iVar2 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar2 = FUN_00407048(&local_8,local_8);
      }
      param_2 = 0;
      if (iVar2 != 0) {
        param_2 = *(int *)(iVar2 + -4);
      }
    }
    if (0 < param_2) {
      iVar2 = 1;
      do {
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar3 = FUN_00407048(&local_8,local_8);
        }
        if (*(short *)(iVar3 + -2 + iVar2 * 2) == 0xd) {
          bVar4 = true;
        }
        else {
          iVar3 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar3 = FUN_00407048(&local_8,local_8);
          }
          if (*(short *)(iVar3 + -2 + iVar2 * 2) == 10) {
            if (iVar2 == 1) {
              bVar4 = true;
            }
            else {
              iVar3 = local_8;
              if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
                iVar3 = FUN_00407048(&local_8,local_8);
              }
              bVar4 = *(short *)(iVar3 + -4 + iVar2 * 2) != 0xd;
            }
          }
          else {
            bVar4 = false;
          }
        }
        if (bVar4) {
          DAT_0077f3dc = DAT_0077f3dc + 1;
          DAT_0077f3e0 = 0;
        }
        else {
          DAT_0077f3e0 = DAT_0077f3e0 + 1;
        }
        iVar2 = iVar2 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    FUN_00407eb8(&DAT_00790008,local_c);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006ae54b;
  puStack_1c = (undefined1 *)0x6ae543;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
