// rea decompile_all
// name: FUN_0055de5c
// address: 0x55de5c
// body: available
// range: 0x55de5c-0x55e0a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55de7a (push 0x55e0a5 followed by fs-segment stack chaining); handler 0x55e0a5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055de5c(undefined4 param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  HANDLE pvVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  HANDLE local_2c;
  HANDLE local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_c;
  int local_8;

  local_18 = &stack0xfffffffc;
  iVar7 = 6;
  do {
    local_8 = 0;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_1c = &LAB_0055e0a5;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  cVar3 = (char)PTR_FUN_00686390;
  puVar1 = &stack0xfffffffc;
  if ((byte)PTR_FUN_00686394 == 0) {
    local_24 = 0x55de98;
    bVar2 = FUN_0055e710(param_1);
    PTR_FUN_00686394._0_1_ = bVar2 ^ 1;
    if (bVar2 == 0) {
      local_24 = 0x55e07a;
      FUN_0055ea24(param_1);
      cVar3 = (char)PTR_FUN_00686390;
      puVar1 = local_18;
    }
    else {
      if (DAT_00686328 == 0) {
        local_24 = 0x55dfc4;
        FUN_0053f204(&local_c);
      }
      else {
        local_24 = 0x55decb;
        FUN_00543058(&DAT_0055e0c0,DAT_00686328,&local_c);
        local_24 = 0x55ded3;
        FUN_0053f204(&local_18);
        local_24 = 0x55dee1;
        FUN_00408678(&stack0xffffffec,local_c,local_18);
        local_24 = 0x55def1;
        FUN_00542f60(&DAT_0055e0c0,unaff_ESI,&stack0xfffffff0);
        local_24 = 0x55defc;
        FUN_004081e8(&local_c,unaff_EBX);
        local_24 = 0x55df04;
        uVar4 = thunk_FUN_004072d8(&local_8);
        local_24 = 0x55df10;
        cVar3 = FUN_0053f158(L"_NT_SYMBOL_PATH",uVar4);
        if ((cVar3 != '\0') && (local_8 != 0)) {
          local_24 = 0x55df2a;
          FUN_00543058(&DAT_0055e0c0,local_8,&local_20);
          local_24 = 0x55df35;
          FUN_004085b8(&local_20,local_c);
          local_24 = 0x55df45;
          FUN_00542f60(&DAT_0055e0c0,local_20,&local_1c);
          local_24 = 0x55df50;
          FUN_004081e8(&local_c,local_1c);
        }
        local_24 = 0x55df58;
        uVar4 = thunk_FUN_004072d8(&local_8);
        local_24 = 0x55df64;
        cVar3 = FUN_0053f158(L"_NT_ALTERNATE_SYMBOL_PATH",uVar4);
        if ((cVar3 != '\0') && (local_8 != 0)) {
          local_24 = 0x55df7e;
          FUN_00543058(&DAT_0055e0c0,local_8,&local_28);
          local_24 = 0x55df89;
          FUN_004085b8(&local_28,local_c);
          local_24 = 0x55df99;
          FUN_00542f60(&DAT_0055e0c0,local_28,&local_24);
          uVar6 = local_24;
          local_24 = 0x55dfa4;
          FUN_004081e8(&local_c,uVar6);
        }
        local_24 = 0x55dfaf;
        FUN_0055dd60(local_c,&local_2c);
        local_24 = 0x55dfba;
        FUN_004081e8(&local_c,local_2c);
      }
      if (*PTR_PTR_006895f4 == '\0') {
        local_24 = 0x55dfdc;
        pvVar5 = (HANDLE)GetCurrentProcessId();
      }
      else {
        local_24 = 0x55dfd3;
        pvVar5 = GetCurrentProcess();
      }
      if (DAT_006863a0 == (code *)0x0) {
        if (DAT_0068639c == (code *)0x0) {
          cVar3 = false;
        }
        else {
          local_24 = 0;
          local_28 = (HANDLE)0x55e029;
          FUN_004083e8(&local_34,local_c,0);
          local_28 = (HANDLE)0x55e031;
          local_28 = (HANDLE)FUN_00407ae0(local_34);
          local_30 = 0x55e039;
          local_2c = pvVar5;
          iVar7 = (*DAT_0068639c)();
          cVar3 = iVar7 != 0;
        }
      }
      else {
        local_24 = 0;
        local_28 = (HANDLE)0x55dff4;
        FUN_00408420(&local_30,local_c);
        local_24 = 0x55dffc;
        local_24 = FUN_00407fb8(local_30);
        local_2c = (HANDLE)0x55e004;
        local_28 = pvVar5;
        iVar7 = (*DAT_006863a0)();
        cVar3 = iVar7 != 0;
      }
      puVar1 = local_18;
      if ((bool)cVar3 != false) {
        local_24 = 0x55e04f;
        uVar6 = (*DAT_006863a4)();
        local_24 = uVar6 & 0xfffffefd | 0x2214;
        local_28 = (HANDLE)0x55e06b;
        (*DAT_006863a8)();
        puVar1 = local_18;
      }
    }
  }
  local_18 = puVar1;
  PTR_FUN_00686390._0_1_ = cVar3;
  puVar1 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_0055e0ac;
  local_1c = (undefined1 *)0x55e08f;
  FUN_004072d8(&local_34,local_20,puVar1);
  local_1c = (undefined1 *)0x55e097;
  FUN_00407dd0(&local_30);
  local_1c = (undefined1 *)0x55e0a4;
  thunk_FUN_004072fc(&local_2c,10);
  return;
}
