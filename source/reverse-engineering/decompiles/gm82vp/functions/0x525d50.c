// rea decompile_all
// name: FUN_00525d50
// address: 0x525d50
// body: available
// range: 0x525d50-0x5260ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x525d68 (push 0x5260ed followed by fs-segment stack chaining); handler 0x5260ed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00525d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int *local_1c;
  undefined4 *local_18;
  int local_14;
  char local_d;
  int local_c;
  int local_8;

  puStack_34 = &stack0xfffffffc;
  local_28 = 0;
  puStack_38 = &LAB_005260ed;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_8 = FUN_00525a70(*(undefined4 *)(param_4 + -0x812c),param_2,param_3,param_4);
  do {
    if (local_8 < 0) goto LAB_005260d7;
    if (local_8 == *(int *)(param_4 + -0x810c)) {
      if (-1 < *(int *)(param_4 + -0x810c) + -1) {
        iVar3 = 0;
        local_18 = (undefined4 *)(param_4 + -0xc12c);
        local_1c = (int *)(param_4 + -0x1012c);
        local_14 = *(int *)(param_4 + -0x810c);
        do {
          *local_18 = 0;
          *local_1c = iVar3;
          iVar3 = iVar3 + 1;
          local_1c = local_1c + 1;
          local_18 = local_18 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar3 = *(int *)(param_4 + -0x810c);
      if (iVar3 < 0x1000) {
        local_20 = (undefined4 *)(param_4 + -0xc12c + iVar3 * 4);
        local_24 = (undefined4 *)(param_4 + -0x1012c + iVar3 * 4);
        do {
          *local_20 = 0;
          *local_24 = 0;
          iVar3 = iVar3 + 1;
          local_24 = local_24 + 1;
          local_20 = local_20 + 1;
        } while (iVar3 != 0x1000);
      }
      *(uint *)(param_4 + -0x812c) = *(byte *)(param_4 + -0x1012d) + 1;
      *(int *)(param_4 + -0x10134) = *(int *)(param_4 + -0x810c) * 2;
      *(int *)(param_4 + -0x10138) = *(int *)(param_4 + -0x810c) + 2;
      *(int *)(param_4 + -0x1013c) = param_4 + -0x8104;
      do {
        uVar2 = FUN_00525a70(*(undefined4 *)(param_4 + -0x812c));
        *(undefined4 *)(param_4 + -0x10140) = uVar2;
        *(undefined4 *)(param_4 + -0x10144) = *(undefined4 *)(param_4 + -0x10140);
      } while (*(int *)(param_4 + -0x10140) == *(int *)(param_4 + -0x810c));
      local_8 = *(int *)(param_4 + -0x10140);
      goto LAB_005260d7;
    }
    if (local_8 == *(int *)(param_4 + -0x10148)) {
      local_8 = -2;
      if (((*(char *)(param_4 + -0x8125) != '\0') ||
          (iVar3 = (**(code **)(**(int **)(param_4 + -0x8124) + 0xc))
                             (*(int **)(param_4 + -0x8124),&local_d,1), iVar3 != 1)) ||
         (local_d == '\0')) goto LAB_005260d7;
      goto LAB_00525f0f;
    }
    iVar3 = local_8;
    if (*(int *)(param_4 + -0x10138) <= local_8) {
      **(undefined4 **)(param_4 + -0x1013c) = *(undefined4 *)(param_4 + -0x10140);
      *(int *)(param_4 + -0x1013c) = *(int *)(param_4 + -0x1013c) + 4;
      iVar3 = *(int *)(param_4 + -0x10144);
    }
    local_c = local_8;
    if (*(int *)(param_4 + -0x810c) <= iVar3) {
      do {
        **(undefined4 **)(param_4 + -0x1013c) = *(undefined4 *)(param_4 + -0x1012c + iVar3 * 4);
        *(int *)(param_4 + -0x1013c) = *(int *)(param_4 + -0x1013c) + 4;
        if (iVar3 == *(int *)(param_4 + -0xc12c + iVar3 * 4)) {
          FUN_0040b9d0(&LAB_0051eb54,&local_28);
          FUN_0051eddc(local_28);
        }
        iVar3 = *(int *)(param_4 + -0xc12c + iVar3 * 4);
      } while (*(int *)(param_4 + -0x810c) <= iVar3);
    }
    *(undefined4 *)(param_4 + -0x10140) = *(undefined4 *)(param_4 + -0x1012c + iVar3 * 4);
    **(undefined4 **)(param_4 + -0x1013c) = *(undefined4 *)(param_4 + -0x10140);
    *(int *)(param_4 + -0x1013c) = *(int *)(param_4 + -0x1013c) + 4;
    local_8 = *(int *)(param_4 + -0x10138);
    if (local_8 < 0x1000) {
      *(undefined4 *)(param_4 + -0xc12c + local_8 * 4) = *(undefined4 *)(param_4 + -0x10144);
      *(undefined4 *)(param_4 + -0x1012c + local_8 * 4) = *(undefined4 *)(param_4 + -0x10140);
      *(int *)(param_4 + -0x10138) = *(int *)(param_4 + -0x10138) + 1;
      if ((*(int *)(param_4 + -0x10134) <= *(int *)(param_4 + -0x10138)) &&
         (*(int *)(param_4 + -0x10134) < 0x1000)) {
        *(int *)(param_4 + -0x10134) = *(int *)(param_4 + -0x10134) * 2;
        *(int *)(param_4 + -0x812c) = *(int *)(param_4 + -0x812c) + 1;
      }
    }
    *(int *)(param_4 + -0x10144) = local_c;
  } while (*(int *)(param_4 + -0x1013c) <= param_4 + -0x8104);
  *(int *)(param_4 + -0x1013c) = *(int *)(param_4 + -0x1013c) + -4;
  local_8 = **(int **)(param_4 + -0x1013c);
  goto LAB_005260d7;
  while (local_d != '\0') {
LAB_00525f0f:
    (**(code **)(**(int **)(param_4 + -0x8124) + 0x14))(*(int **)(param_4 + -0x8124),local_d,1);
    iVar3 = (**(code **)(**(int **)(param_4 + -0x8124) + 0xc))
                      (*(int **)(param_4 + -0x8124),&local_d,1);
    if (iVar3 != 1) break;
  }
LAB_005260d7:
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005260f4;
  puStack_38 = (undefined1 *)0x5260ec;
  thunk_FUN_004072d8(&local_28,uStack_3c,puVar1);
  return;
}
