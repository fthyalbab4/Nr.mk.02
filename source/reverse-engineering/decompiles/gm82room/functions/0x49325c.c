// rea decompile_all
// name: FUN_0049325c
// address: 0x49325c
// body: available
// range: 0x49325c-0x49344b inclusive
// range: 0x493453-0x4934af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x49336b (push 0x49344c followed by fs-segment stack chaining); handler 0x49344c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0049325c(int param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  bool local_29;
  int local_28;
  int local_24;
  byte local_1d;
  int *local_1c;
  int *local_14;
  int local_c;
  int local_8;

  local_1d = 1;
  puStack_60 = (undefined1 *)0x493279;
  local_1c = param_3;
  local_14 = param_2;
  local_8 = param_1;
  cVar2 = FUN_004c4988(param_1);
  if (cVar2 != '\0') {
    puStack_60 = (undefined1 *)0x493289;
    iVar3 = FUN_00492678(local_8);
    if ((-1 < iVar3 + -1) || ((*(byte *)(local_8 + 0x1c) & 0x10) == 0)) {
      local_c = 0;
      puStack_60 = (undefined1 *)0x4932aa;
      local_34 = FUN_004baf44(local_8);
      puStack_60 = (undefined1 *)0x4932b5;
      uVar4 = FUN_004baf84(local_8);
      iVar3 = local_34;
      local_24 = *(int *)(local_8 + 0x48) - local_34;
      local_28 = *(int *)(local_8 + 0x4c) - uVar4;
      puStack_64 = (undefined1 *)0x4932e9;
      puStack_60 = &stack0xfffffffc;
      local_30 = uVar4;
      FUN_00492c10(&local_34,&local_30);
      local_3c = *local_14 - local_24;
      local_38 = *local_1c - local_28;
      if (*(char *)(local_8 + 0x5d) == '\0') {
        uVar7 = local_3c - iVar3 >> 0x1f;
        puStack_60 = (undefined1 *)((local_3c - iVar3 ^ uVar7) - uVar7);
        uVar7 = (int)(local_38 - uVar4) >> 0x1f;
        local_29 = (int)puStack_60 < (int)((local_38 - uVar4 ^ uVar7) - uVar7);
      }
      else {
        local_29 = (byte)(*(char *)(local_8 + 0x5d) - 3U) < 2;
        uVar7 = local_38;
      }
      if (*(char *)(local_8 + 0x2b2) != '\0') {
        puStack_60 = (undefined1 *)0x49335d;
        local_c = FUN_00405fac(&DAT_0042e9cc,CONCAT31((int3)(uVar7 >> 8),1));
        puStack_64 = &LAB_0049344c;
        uStack_68 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_68;
        puStack_60 = &stack0xfffffffc;
        FUN_00439a7c(local_c,*(undefined4 *)(*(int *)(local_8 + 0x288) + 8));
        if (local_29 == false) {
          FUN_004931bc(&local_3c,&local_38);
        }
        else {
          FUN_00493088(&local_3c,&local_38);
        }
        FUN_00492c10(&local_3c,&local_38,&stack0xfffffffc);
        if ((((local_29 == false) && (*(char *)(local_8 + 0x5d) != '\0')) || (local_3c == local_34))
           && (local_38 == local_30)) {
          FUN_00491b74(local_8);
        }
        else {
          iVar3 = *(int *)(local_c + 4);
          if (-1 < iVar3 + -1) {
            iVar8 = 0;
            do {
              uVar5 = FUN_00438ec4(*(undefined4 *)(local_8 + 0x288),iVar8);
              cVar2 = FUN_004061f8(uVar5,&PTR_LAB_00488b04);
              if (cVar2 != '\0') {
                uVar5 = FUN_00439b4c(local_c,iVar8);
                uVar6 = FUN_00438ec4(*(undefined4 *)(local_8 + 0x288),iVar8);
                FUN_00490548(uVar6,uVar5);
              }
              iVar8 = iVar8 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          FUN_00491014(local_8,0);
        }
        puVar1 = puStack_60;
        *in_FS_OFFSET = uStack_68;
        puStack_60 = (undefined1 *)0x493460;
        puStack_64 = (undefined1 *)0x49344b;
        uVar4 = FUN_00405fdc(local_c,uStack_68,puVar1);
        return uVar4;
      }
      puStack_64 = (undefined1 *)0x49345f;
      puVar1 = puStack_60;
      puStack_60 = &stack0xfffffffc;
      FUN_00492c10(&local_3c,&local_38,puVar1);
      if ((*(char *)(local_8 + 0x5e) != '\0') && (*(char *)(local_8 + 0x5d) != '\x05')) {
        if ((local_29 != false) || (*(char *)(local_8 + 0x5d) == '\0')) {
          *local_14 = local_3c + local_24;
        }
        if ((local_29 == false) || (*(char *)(local_8 + 0x5d) == '\0')) {
          *local_1c = local_38 + local_28;
        }
      }
    }
  }
  return (uint)local_1d;
}
