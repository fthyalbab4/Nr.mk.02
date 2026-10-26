// rea decompile_all
// name: FUN_00610d7c
// address: 0x610d7c
// body: available
// range: 0x610d7c-0x611064 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x610dae (push 0x611065 followed by fs-segment stack chaining); handler 0x611065 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00610d7c(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined2 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined *in_stack_ffffffbc;
  undefined1 *in_stack_ffffffc4;
  undefined1 *local_30;
  wchar_t *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_10;
  undefined1 *local_c;
  undefined *local_8;

  iVar2 = 5;
  do {
    local_c = (undefined1 *)0x0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  UNLOCK();
  local_8 = (undefined *)0x0;
  local_20 = (undefined1 *)0x610da3;
  thunk_FUN_00407ad0(0);
  local_24 = &LAB_00611065;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_20 = &stack0xfffffffc;
  if ((char)PTR_FUN_00688664 == '\0') {
    PTR_FUN_00688664._0_1_ = '\x01';
    local_2c = L"喍诸\xf045峨Z茀\xec7d紁윇\xec45\x01";
    local_20 = &stack0xfffffffc;
    FUN_00408194(&DAT_00850ec0,0);
    local_2c = L"綃Ǭݽ䗇Ǭ";
    FUN_00616838(param_1,&local_c);
    if (param_2 < 1) {
      param_2 = 1;
    }
    puVar1 = local_c;
    if ((local_c != (undefined1 *)0x0) && (*(short *)(local_c + -10) != 2)) {
      local_2c = (wchar_t *)0x610e06;
      puVar1 = (undefined1 *)FUN_00407488(&local_c,local_c);
    }
    iVar2 = 0;
    if (puVar1 != (undefined1 *)0x0) {
      iVar2 = *(int *)(puVar1 + -4);
    }
    if (iVar2 < param_2) {
      puVar1 = local_c;
      if ((local_c != (undefined1 *)0x0) && (*(short *)(local_c + -10) != 2)) {
        local_2c = L"삅մ\xe883謄褀\xec45\xf633䗇Ǩ";
        puVar1 = (undefined1 *)FUN_00407488(&local_c,local_c);
      }
      param_2 = 0;
      if (puVar1 != (undefined1 *)0x0) {
        param_2 = *(int *)(puVar1 + -4);
      }
    }
    iVar4 = 0;
    iVar2 = 1;
    if (0 < param_2) {
      iVar3 = 1;
      iVar5 = param_2;
      do {
        puVar1 = local_c;
        if ((local_c != (undefined1 *)0x0) && (*(short *)(local_c + -10) != 2)) {
          local_2c = (wchar_t *)0x610e73;
          puVar1 = (undefined1 *)FUN_00407488(&local_c,local_c);
        }
        if (*(short *)(puVar1 + iVar3 * 2 + -2) == 0xd) {
          bVar6 = true;
        }
        else {
          puVar1 = local_c;
          if ((local_c != (undefined1 *)0x0) && (*(short *)(local_c + -10) != 2)) {
            local_2c = (wchar_t *)0x610e9c;
            puVar1 = (undefined1 *)FUN_00407488(&local_c,local_c);
          }
          if (*(short *)(puVar1 + iVar3 * 2 + -2) == 10) {
            if (iVar3 == 1) {
              bVar6 = true;
            }
            else {
              puVar1 = local_c;
              if ((local_c != (undefined1 *)0x0) && (*(short *)(local_c + -10) != 2)) {
                local_2c = (wchar_t *)0x610eca;
                puVar1 = (undefined1 *)FUN_00407488(&local_c,local_c);
              }
              bVar6 = *(short *)(puVar1 + iVar3 * 2 + -4) != 0xd;
            }
          }
          else {
            bVar6 = false;
          }
        }
        if (bVar6) {
          iVar2 = iVar2 + 1;
          iVar4 = 0;
        }
        else {
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_2c = (wchar_t *)0x610ef5;
    FUN_004081e8(&local_10,0);
    puVar1 = local_c;
    if ((local_c != (undefined1 *)0x0) && (*(short *)(local_c + -10) != 2)) {
      local_2c = (wchar_t *)0x610f15;
      puVar1 = (undefined1 *)FUN_00407488(&local_c,local_c);
    }
    iVar5 = 0;
    if (puVar1 != (undefined1 *)0x0) {
      iVar5 = *(int *)(puVar1 + -4);
    }
    if (0 < iVar5) {
      for (; 1 < param_2; param_2 = param_2 + -1) {
        local_2c = (wchar_t *)0x610f32;
        iVar5 = FUN_00407498(&local_c);
        if (*(short *)(iVar5 + -4 + param_2 * 2) == 0xd) break;
      }
      do {
        local_2c = (wchar_t *)0x610f60;
        FUN_00407498(&local_c);
        local_2c = (wchar_t *)0x610f65;
        iVar5 = FUN_00408514();
        if (iVar5 < param_2) break;
        local_2c = (wchar_t *)0x610f71;
        iVar5 = FUN_00407498(&local_c);
        if (*(short *)(iVar5 + -2 + param_2 * 2) == 0xd) break;
        local_2c = (wchar_t *)0x610f4c;
        FUN_00408310(&local_20,*(undefined2 *)(local_c + param_2 * 2 + -2));
        local_2c = (wchar_t *)0x610f57;
        FUN_004085b8(&local_10,local_20);
        param_2 = param_2 + 1;
      } while( true );
    }
    if (*(int *)(param_1 + 4) == 1) {
      local_2c = L"Error in code at line ";
      local_30 = (undefined1 *)0x610f92;
      FUN_0041636c(iVar2,&local_24);
      local_30 = local_24;
      in_stack_ffffffc4 = &DAT_006110dc;
      in_stack_ffffffbc = &DAT_006110cc;
      FUN_00408134(CONCAT22(extraout_var,0x20),iVar4 + 1,&local_28,&DAT_006110cc,local_10,
                   &DAT_006110dc,&DAT_006110cc,&DAT_006110bc);
      FUN_0041636c(iVar4,&local_2c);
      FUN_0040875c(&DAT_00850ec0,0xe);
    }
    else {
      local_2c = L"Error in expression:";
      local_30 = local_c;
      FUN_0041636c(iVar4,&local_30);
      in_stack_ffffffbc = local_8;
      in_stack_ffffffc4 = local_30;
      FUN_0040875c(&DAT_00850ec0,7);
    }
    FUN_004081e8(&local_c,0);
    FUN_00408520(&local_c,0);
  }
  *in_FS_OFFSET = in_stack_ffffffbc;
  thunk_FUN_004072fc(&local_30,5,in_stack_ffffffc4,&LAB_0061106c);
  thunk_FUN_004072fc(&local_10,3);
  return;
}
