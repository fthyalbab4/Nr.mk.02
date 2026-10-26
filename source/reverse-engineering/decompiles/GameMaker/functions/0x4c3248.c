// rea decompile_all
// name: FUN_004c3248
// address: 0x4c3248
// body: available
// range: 0x4c3248-0x4c3437 inclusive
// range: 0x4c343f-0x4c349b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c3357 (push 0x4c3438 followed by fs-segment stack chaining); handler 0x4c3438 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004c3248(int param_1,int *param_2,int *param_3)

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
  puStack_60 = (undefined1 *)0x4c3265;
  local_1c = param_3;
  local_14 = param_2;
  local_8 = param_1;
  cVar2 = FUN_004f7a54(param_1);
  if (cVar2 != '\0') {
    puStack_60 = (undefined1 *)0x4c3275;
    iVar3 = FUN_004c2664(local_8);
    if ((-1 < iVar3 + -1) || ((*(byte *)(local_8 + 0x1c) & 0x10) == 0)) {
      local_c = 0;
      puStack_60 = (undefined1 *)0x4c3296;
      local_34 = FUN_004edf8c(local_8);
      puStack_60 = (undefined1 *)0x4c32a1;
      uVar4 = FUN_004edfcc(local_8);
      iVar3 = local_34;
      local_24 = *(int *)(local_8 + 0x48) - local_34;
      local_28 = *(int *)(local_8 + 0x4c) - uVar4;
      puStack_64 = (undefined1 *)0x4c32d5;
      puStack_60 = &stack0xfffffffc;
      local_30 = uVar4;
      FUN_004c2bfc(&local_34,&local_30);
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
        puStack_60 = (undefined1 *)0x4c3349;
        local_c = FUN_00405a4c(&DAT_00430630,CONCAT31((int3)(uVar7 >> 8),1));
        puStack_64 = &LAB_004c3438;
        uStack_68 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_68;
        puStack_60 = &stack0xfffffffc;
        FUN_0043c3c4(local_c,*(undefined4 *)(*(int *)(local_8 + 0x288) + 8));
        if (local_29 == false) {
          FUN_004c31a8(&local_3c,&local_38);
        }
        else {
          FUN_004c3074(&local_3c,&local_38);
        }
        FUN_004c2bfc(&local_3c,&local_38,&stack0xfffffffc);
        if ((((local_29 == false) && (*(char *)(local_8 + 0x5d) != '\0')) || (local_3c == local_34))
           && (local_38 == local_30)) {
          FUN_004c1b60(local_8);
        }
        else {
          iVar3 = *(int *)(local_c + 4);
          if (-1 < iVar3 + -1) {
            iVar8 = 0;
            do {
              uVar5 = FUN_0043b048(*(undefined4 *)(local_8 + 0x288),iVar8);
              cVar2 = FUN_00405c98(uVar5,&PTR_LAB_004a4a78);
              if (cVar2 != '\0') {
                uVar5 = FUN_0043c494(local_c,iVar8);
                uVar6 = FUN_0043b048(*(undefined4 *)(local_8 + 0x288),iVar8);
                FUN_004c0534(uVar6,uVar5);
              }
              iVar8 = iVar8 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          FUN_004c1000(local_8,0);
        }
        puVar1 = puStack_60;
        *in_FS_OFFSET = uStack_68;
        puStack_60 = (undefined1 *)0x4c344c;
        puStack_64 = (undefined1 *)0x4c3437;
        uVar4 = FUN_00405a7c(local_c,uStack_68,puVar1);
        return uVar4;
      }
      puStack_64 = (undefined1 *)0x4c344b;
      puVar1 = puStack_60;
      puStack_60 = &stack0xfffffffc;
      FUN_004c2bfc(&local_3c,&local_38,puVar1);
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
