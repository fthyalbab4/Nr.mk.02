// rea decompile_all
// name: FUN_00420b98
// address: 0x420b98
// body: available
// range: 0x420b98-0x420db1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x420bc7 (push 0x420db2 followed by fs-segment stack chaining); handler 0x420db2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00420b98(int param_1,short *param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  char cVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  int *in_FS_OFFSET;
  undefined4 uVar7;
  int iStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  wchar_t *local_4c;
  undefined1 local_48;
  int local_44;
  undefined1 local_40;
  wchar_t *local_3c;
  undefined1 local_38;
  int local_34;
  undefined1 local_30;
  wchar_t *local_2c;
  undefined1 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  short *local_14;
  int local_10;
  int local_c;
  short *local_8;

  puStack_5c = (undefined1 *)0x420bb4;
  local_c = param_3;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_5c = (undefined1 *)0x420bbc;
  thunk_FUN_00407ad0(local_c);
  puStack_60 = &LAB_00420db2;
  iStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_64;
  puStack_5c = &stack0xfffffffc;
  local_10 = param_1;
  if (param_4 != 0) {
    puStack_5c = &stack0xfffffffc;
    if (param_5 < 0) {
      local_2c = L"StartIndex";
      local_28 = 0x11;
      puStack_5c = &stack0xfffffffc;
      FUN_0041bf50(&LAB_00411654,1,PTR_LAB_0068958c,0,&local_2c);
      FUN_00406ab4();
    }
    if (param_4 < 0) {
      local_2c = L"Count";
      local_28 = 0x11;
      FUN_0041bf50(&LAB_00411654,1,PTR_LAB_0068958c,0,&local_2c);
      FUN_00406ab4();
    }
    if (*(int *)(param_1 + 8) < param_4 + param_5) {
      local_4c = L"StartIndex";
      local_48 = 0x11;
      local_44 = param_5;
      local_40 = 0;
      local_3c = L"Count";
      local_38 = 0x11;
      local_34 = param_4;
      local_30 = 0;
      FUN_0041bf50(&LAB_00411654,1,PTR_LAB_00688e20,3,&local_4c);
      FUN_00406ab4();
    }
    psVar3 = local_8;
    if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
      psVar3 = (short *)FUN_00407488(&local_8,local_8);
    }
    local_20 = 0;
    if (psVar3 != (short *)0x0) {
      local_20 = *(int *)(psVar3 + -2);
    }
    iVar4 = local_c;
    if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
      iVar4 = FUN_00407488(&local_c,local_c);
    }
    local_24 = 0;
    if (iVar4 != 0) {
      local_24 = *(int *)(iVar4 + -4);
    }
    local_18 = param_5;
    psVar3 = (short *)(*(int *)(param_1 + 4) + param_5 * 2);
    local_1c = (param_5 + param_4) - local_20;
    local_14 = (short *)(*(int *)(param_1 + 4) + local_1c * 2);
    if (psVar3 <= local_14) {
      do {
        psVar5 = local_8;
        if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
          psVar5 = (short *)FUN_00407488(&local_8,local_8);
        }
        if (*psVar3 == *psVar5) {
          uVar6 = FUN_00408220(local_8);
          uVar7 = 0x420d37;
          iVar4 = FUN_004178d0(psVar3,uVar6,local_20);
          if (iVar4 == 0) {
            iStack_64 = local_c;
            cVar2 = FUN_004211cc(param_1,local_18,local_8,uVar7);
            if (cVar2 != '\0') {
              psVar3 = (short *)(*(int *)(param_1 + 4) + local_18 * 2);
              local_14 = (short *)(*(int *)(param_1 + 4) + local_1c * 2);
            }
            psVar3 = psVar3 + local_24 + -1;
            local_18 = local_18 + local_24 + -1;
            local_14 = local_14 + (local_24 - local_20);
            local_1c = local_1c + (local_24 - local_20);
          }
        }
        psVar3 = psVar3 + 1;
        local_18 = local_18 + 1;
      } while (psVar3 <= local_14);
    }
  }
  puVar1 = puStack_5c;
  *in_FS_OFFSET = iStack_64;
  puStack_5c = &LAB_00420db9;
  puStack_60 = (undefined1 *)0x420db1;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
