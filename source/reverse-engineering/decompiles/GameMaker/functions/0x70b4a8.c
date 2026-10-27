// rea decompile_all
// name: FUN_0070b4a8
// address: 0x70b4a8
// body: available
// range: 0x70b4a8-0x70b6e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x70b4c4 (push 0x70b6e6 followed by fs-segment stack chaining); handler 0x70b6e6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0070b4a8(char param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar7;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  char local_5;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0070b6e6;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_5 = param_1;
  FUN_00409be0(&DAT_0079089c,&DAT_0070b208,1,DAT_007908a0);
  if (-1 < DAT_007908a0 + -1) {
    iVar5 = 0;
    iVar6 = DAT_007908a0;
    do {
      *(undefined4 *)(DAT_0079089c + iVar5 * 4) = 0xffffffff;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = FUN_00409a18(DAT_007908ac);
  if (-1 < iVar6 + -1) {
    local_c = 0;
    do {
      iVar5 = *(int *)(DAT_007908ac + local_c * 4);
      *(undefined4 *)(DAT_0079089c + iVar5 * 4) = 0xffffffff;
      fVar7 = in_ST0;
      if (*(char *)(DAT_00790890 + iVar5) != '\0') {
        iVar3 = FUN_0064df24(*(undefined4 *)(DAT_00790894 + iVar5 * 4));
        fVar7 = in_ST0;
        if (local_5 == '\0') {
          *(int *)(DAT_0079089c + iVar5 * 4) = iVar3;
        }
        else if (*(int *)(DAT_0079088c + iVar5 * 4) != 0) {
          if ((iVar3 < 0) || (DAT_0079083c == 4)) {
            cVar2 = (**(code **)(**(int **)(DAT_00790834 + 0x3ec) + 0xec))();
            if (cVar2 == '\0') {
              uVar4 = FUN_0071e4b8(*(undefined4 *)(DAT_007908a8 + local_c * 4),6);
            }
            else {
              uStack_28 = *(undefined4 *)(DAT_007908a8 + local_c * 4);
              FUN_00408480(&local_10,3);
              uVar4 = FUN_0071e4b8(local_10,6);
            }
            uVar4 = FUN_0071cdfc(uVar4);
            *(undefined4 *)(DAT_0079089c + iVar5 * 4) = uVar4;
            FUN_0064de98(*(undefined4 *)(DAT_0079089c + iVar5 * 4),
                         *(undefined4 *)(DAT_00790894 + iVar5 * 4));
            FUN_0064e014(*(undefined4 *)(DAT_0079089c + iVar5 * 4));
            uVar4 = FUN_0064e048(*(undefined4 *)(DAT_0079089c + iVar5 * 4));
            FUN_0062dc1c(uVar4,*(undefined4 *)(DAT_0079088c + iVar5 * 4));
            FUN_0064e0cc(*(undefined4 *)(DAT_0079089c + iVar5 * 4));
            fVar7 = in_ST0;
          }
          else if (DAT_0079083c == 2) {
LAB_0070b679:
            *(int *)(DAT_0079089c + iVar5 * 4) = iVar3;
            FUN_0064e014();
            uVar4 = FUN_0064e048(*(undefined4 *)(DAT_0079089c + iVar5 * 4));
            FUN_0062dc1c(uVar4,*(undefined4 *)(DAT_0079088c + iVar5 * 4));
            FUN_0064e0cc(*(undefined4 *)(DAT_0079089c + iVar5 * 4));
          }
          else if (DAT_0079083c == 3) {
            fVar7 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = in_ST7;
            FUN_0064dfa0(iVar3);
            in_ST7 = in_ST6;
            if (in_ST0 < (float10)*(double *)(DAT_00790898 + iVar5 * 8)) goto LAB_0070b679;
          }
          *PTR_DAT_007817d4 = 1;
        }
      }
      local_c = local_c + 1;
      iVar6 = iVar6 + -1;
      in_ST0 = fVar7;
    } while (iVar6 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0070b6ed;
  puStack_24 = (undefined1 *)0x70b6e5;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  return;
}
