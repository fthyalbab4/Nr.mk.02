// rea decompile_all
// name: FUN_00704f30
// address: 0x704f30
// body: available
// range: 0x704f30-0x7051ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x704f4b (push 0x7051cf followed by fs-segment stack chaining); handler 0x7051cf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00704f30(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_007051cf;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (-1 < *(int *)(param_1 + 4)) {
    uVar2 = FUN_0070f50c(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = uVar2;
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  if (-1 < *(int *)(param_1 + 0x18)) {
    uVar2 = FUN_0070f50c(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  if (*(int *)(param_1 + 0x14) != -100) {
    uVar2 = FUN_0070f5d0(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  uVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2c));
  FUN_00409be0(&local_8,&DAT_00704f00,1,uVar2);
  iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2c));
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      *(undefined4 *)(local_8 + iVar6 * 4) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar6 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar6 * 4) = 0;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00409be0(param_1 + 0x2c,&DAT_0070437c,1,0);
  iVar3 = FUN_0062ca94();
  if (0 < iVar3) {
    iVar3 = FUN_0062ca94();
    FUN_00704d74(param_1,4,iVar3 + -1);
  }
  iVar3 = FUN_00409a18(local_8);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      iVar4 = FUN_0070f5d0(iVar6);
      if (-1 < iVar4) {
        iVar5 = FUN_0062ca94();
        if (iVar4 < iVar5) {
          FUN_00405a7c(*(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar4 * 4));
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar4 * 4) =
               *(undefined4 *)(local_8 + iVar6 * 4);
          *(undefined4 *)(local_8 + iVar6 * 4) = 0;
        }
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00409a18(local_8);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      FUN_00405a7c(*(undefined4 *)(local_8 + iVar6 * 4));
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00409ce0(&local_8,&DAT_00704f00);
  uVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x48));
  FUN_00409be0(&local_8,&DAT_00704f00,1,uVar2);
  iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x48));
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      *(undefined4 *)(local_8 + iVar6 * 4) = *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar6 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar6 * 4) = 0;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00409be0(param_1 + 0x48,&DAT_0070437c,1,0);
  iVar3 = FUN_006bcca0();
  if (0 < iVar3) {
    iVar3 = FUN_006bcca0();
    FUN_00704d74(param_1,0xb,iVar3 + -1);
  }
  iVar3 = FUN_00409a18(local_8);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      iVar4 = FUN_0070f608(iVar6);
      if (-1 < iVar4) {
        iVar5 = FUN_006bcca0();
        if (iVar4 < iVar5) {
          FUN_00405a7c(*(undefined4 *)(*(int *)(param_1 + 0x48) + iVar4 * 4));
          *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar4 * 4) =
               *(undefined4 *)(local_8 + iVar6 * 4);
          *(undefined4 *)(local_8 + iVar6 * 4) = 0;
        }
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00409a18(local_8);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      FUN_00405a7c(*(undefined4 *)(local_8 + iVar6 * 4));
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  do {
    iVar6 = FUN_00409a18(*(undefined4 *)(param_1 + 0x1c + iVar3 * 4));
    if (-1 < iVar6 + -1) {
      local_c = 0;
      do {
        if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x1c + iVar3 * 4) + local_c * 4) + 8)) {
          FUN_005a5324();
        }
        local_c = local_c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    puVar1 = puStack_20;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xc);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_007051d6;
  puStack_24 = (undefined1 *)0x7051ce;
  FUN_00409ce0(&local_8,&DAT_00704f00,puVar1);
  return;
}
