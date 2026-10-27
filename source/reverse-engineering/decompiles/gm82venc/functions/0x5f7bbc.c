// rea decompile_all
// name: FUN_005f7bbc
// address: 0x5f7bbc
// body: available
// range: 0x5f7bbc-0x5f7df4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f7be6 (push 0x5f7df5 followed by fs-segment stack chaining); handler 0x5f7df5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f7bbc(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [2];
  double local_14;

  local_3c = 0;
  puStack_4c = (undefined1 *)0x5f7bdb;
  local_20 = param_1;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_50 = &LAB_005f7df5;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  iVar3 = FUN_0058213c();
  if (-1 < iVar3 + -1) {
    local_28 = 0;
    local_34 = iVar3;
    do {
      if (*(int *)(*(int *)(PTR_DAT_00688df4 + 0x2c) + local_28 * 4) != 0) {
        cVar2 = FUN_00582144(local_28);
        if (cVar2 != '\0') {
          local_30 = FUN_00582164(local_28);
          if ((*(int *)(local_30 + 0x14) == local_20) &&
             (iVar3 = *(int *)(*(int *)(PTR_DAT_00688df4 + 0x2c) + local_28 * 4), -1 < iVar3 + -1))
          {
            local_24 = 0;
            local_38 = iVar3;
            do {
              local_2c = *(undefined4 *)
                          (*(int *)(*(int *)(PTR_DAT_00688e68 + 0x2c) + local_28 * 4) + local_24 * 4
                          );
              iVar3 = FUN_0060aa04(*(undefined4 *)PTR_DAT_0068939c,local_2c);
              if (-1 < iVar3 + -1) {
                iVar5 = 0;
                do {
                  iVar4 = FUN_0060aa2c(*(undefined4 *)PTR_DAT_0068939c,local_2c,iVar5);
                  if (*(char *)(iVar4 + 0x108) == '\0') {
                    cVar2 = FUN_0058869c(iVar4,iVar4,*(undefined4 *)(local_30 + 0xc),local_1c);
                    if (cVar2 == '\0') {
                      uStack_54 = *(undefined4 *)PTR_DAT_00689674;
                      FUN_0040875c(&local_3c,5);
                      FUN_006113b0(local_3c,0);
                    }
                    else if ((local_1c[0] == 0) && (0.5 <= local_14)) {
                      FUN_0058a738(iVar4,iVar4,0xb,local_28);
                    }
                  }
                  iVar5 = iVar5 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              local_24 = local_24 + 1;
              local_38 = local_38 + -1;
            } while (local_38 != 0);
          }
        }
      }
      local_28 = local_28 + 1;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  iVar3 = *(int *)(*(int *)(PTR_DAT_00688df4 + 0xc) + local_20 * 4);
  if (-1 < iVar3 + -1) {
    local_24 = 0;
    local_34 = iVar3;
    do {
      local_2c = *(undefined4 *)
                  (*(int *)(*(int *)(PTR_DAT_00688e68 + 0xc) + local_20 * 4) + local_24 * 4);
      iVar3 = FUN_0060aa04(*(undefined4 *)PTR_DAT_0068939c,local_2c);
      if (-1 < iVar3 + -1) {
        iVar5 = 0;
        local_38 = iVar3;
        do {
          iVar3 = FUN_0060aa2c(*(undefined4 *)PTR_DAT_0068939c,local_2c,iVar5);
          if (*(char *)(iVar3 + 0x108) == '\0') {
            FUN_0058a738(iVar3,iVar3,3,local_20);
          }
          iVar5 = iVar5 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      local_24 = local_24 + 1;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  puVar1 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_005f7dfc;
  puStack_50 = (undefined1 *)0x5f7de6;
  thunk_FUN_004072d8(&local_3c,uStack_54,puVar1);
  puStack_50 = (undefined1 *)0x5f7df4;
  FUN_004090d0(local_1c,&DAT_00615f70);
  return;
}
