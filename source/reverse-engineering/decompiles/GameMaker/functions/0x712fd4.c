// rea decompile_all
// name: FUN_00712fd4
// address: 0x712fd4
// body: available
// range: 0x712fd4-0x7131f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x712ff6 (push 0x7131f2 followed by fs-segment stack chaining); handler 0x7131f2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00712fd4(undefined4 param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  int local_20;
  char local_19;
  int local_18;
  undefined1 local_11;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_38 = &LAB_007131f2;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_11 = 0;
  local_10 = param_1;
  if (param_2 == '\0') {
    FUN_0052f12c(param_1,700);
    iVar5 = 0;
    if (-1 < DAT_0077f5d8 + -1) {
      iVar4 = 0;
      iVar3 = DAT_0077f5d8;
      do {
        if (*(char *)(DAT_00790a14 + iVar4) != '\0') {
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_0052f12c(local_10,iVar5);
    if (-1 < DAT_0077f5d8 + -1) {
      iVar3 = 0;
      iVar5 = DAT_0077f5d8;
      do {
        if (*(char *)(DAT_00790a14 + iVar3) != '\0') {
          FUN_0052f168(local_10,*(undefined4 *)(*(int *)(DAT_0077f5d4 + iVar3 * 4) + 4));
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_00409be0(&local_8,&DAT_00712fa8,1,DAT_0077f5d8);
    if (-1 < DAT_0077f5d8 + -1) {
      iVar3 = 0;
      iVar5 = DAT_0077f5d8;
      do {
        *(undefined1 *)(local_8 + iVar3) = *(undefined1 *)(DAT_00790a14 + iVar3);
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_19 = '\x01';
    while (local_19 != '\0') {
      local_19 = '\0';
      if (-1 < DAT_0077f5d8 + -1) {
        iVar3 = 0;
        iVar5 = DAT_0077f5d8;
        do {
          if ((*(char *)(local_8 + iVar3) != '\0') &&
             (iVar4 = *(int *)(*(int *)(DAT_0077f5d4 + iVar3 * 4) + 0x2c), -1 < iVar4 + -1)) {
            local_18 = 0;
            local_20 = iVar4;
            do {
              FUN_00564e08(*(undefined4 *)(DAT_0077f5d4 + iVar3 * 4),local_18,&local_c);
              iVar4 = FUN_0071335c(local_c,0);
              if (iVar4 < 0) {
                FUN_0040839c(&local_24,L"Cannot find used extension package: ",local_c);
                FUN_004d43f8(local_24);
              }
              else {
                if (*(char *)(local_8 + iVar4) == '\0') {
                  local_19 = '\x01';
                }
                *(undefined1 *)(local_8 + iVar4) = 1;
              }
              local_18 = local_18 + 1;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    FUN_0052f12c(local_10,700);
    iVar5 = 0;
    if (-1 < DAT_0077f5d8 + -1) {
      iVar4 = 0;
      iVar3 = DAT_0077f5d8;
      do {
        if (*(char *)(local_8 + iVar4) != '\0') {
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_0052f12c(local_10,iVar5);
    if (-1 < DAT_0077f5d8 + -1) {
      iVar3 = 0;
      iVar5 = DAT_0077f5d8;
      do {
        if ((*(char *)(local_8 + iVar3) != '\0') &&
           (cVar2 = FUN_005655ac(*(undefined4 *)(DAT_0077f5d4 + iVar3 * 4),local_10), cVar2 == '\0')
           ) goto LAB_007131c6;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  local_11 = 1;
LAB_007131c6:
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_007131f9;
  puStack_38 = (undefined1 *)0x7131db;
  thunk_FUN_00406e5c(&local_24,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x7131e3;
  thunk_FUN_00406e5c(&local_c);
  puStack_38 = (undefined1 *)0x7131f1;
  FUN_00409ce0(&local_8,&DAT_00712fa8);
  return;
}
