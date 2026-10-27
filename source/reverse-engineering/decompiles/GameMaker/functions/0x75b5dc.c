// rea decompile_all
// name: FUN_0075b5dc
// address: 0x75b5dc
// body: available
// range: 0x75b5dc-0x75b824 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75b5fa (push 0x75b825 followed by fs-segment stack chaining); handler 0x75b825 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0075b5dc(undefined4 param_1)

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
  local_1c = &LAB_0075b825;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  cVar3 = DAT_00781508;
  puVar1 = &stack0xfffffffc;
  if (DAT_0078150c == 0) {
    local_24 = 0x75b618;
    bVar2 = FUN_0075be90(param_1);
    DAT_0078150c = bVar2 ^ 1;
    if (bVar2 == 0) {
      local_24 = 0x75b7fa;
      FUN_0075c1a4(param_1);
      cVar3 = DAT_00781508;
      puVar1 = local_18;
    }
    else {
      if (DAT_007814a0 == 0) {
        local_24 = 0x75b744;
        FUN_0073c984(&local_c);
      }
      else {
        local_24 = 0x75b64b;
        FUN_007407d8(&DAT_0075b840,DAT_007814a0,&local_c);
        local_24 = 0x75b653;
        FUN_0073c984(&local_18);
        local_24 = 0x75b661;
        FUN_0040839c(&stack0xffffffec,local_c,local_18);
        local_24 = 0x75b671;
        FUN_007406e0(&DAT_0075b840,unaff_ESI,&stack0xfffffff0);
        local_24 = 0x75b67c;
        FUN_00407f0c(&local_c,unaff_EBX);
        local_24 = 0x75b684;
        uVar4 = thunk_FUN_00406e5c(&local_8);
        local_24 = 0x75b690;
        cVar3 = FUN_0073c8d8(L"_NT_SYMBOL_PATH",uVar4);
        if ((cVar3 != '\0') && (local_8 != 0)) {
          local_24 = 0x75b6aa;
          FUN_007407d8(&DAT_0075b840,local_8,&local_20);
          local_24 = 0x75b6b5;
          FUN_004082dc(&local_20,local_c);
          local_24 = 0x75b6c5;
          FUN_007406e0(&DAT_0075b840,local_20,&local_1c);
          local_24 = 0x75b6d0;
          FUN_00407f0c(&local_c,local_1c);
        }
        local_24 = 0x75b6d8;
        uVar4 = thunk_FUN_00406e5c(&local_8);
        local_24 = 0x75b6e4;
        cVar3 = FUN_0073c8d8(L"_NT_ALTERNATE_SYMBOL_PATH",uVar4);
        if ((cVar3 != '\0') && (local_8 != 0)) {
          local_24 = 0x75b6fe;
          FUN_007407d8(&DAT_0075b840,local_8,&local_28);
          local_24 = 0x75b709;
          FUN_004082dc(&local_28,local_c);
          local_24 = 0x75b719;
          FUN_007406e0(&DAT_0075b840,local_28,&local_24);
          uVar6 = local_24;
          local_24 = 0x75b724;
          FUN_00407f0c(&local_c,uVar6);
        }
        local_24 = 0x75b72f;
        FUN_0075b4e0(local_c,&local_2c);
        local_24 = 0x75b73a;
        FUN_00407f0c(&local_c,local_2c);
      }
      if (*PTR_DAT_007828b4 == '\0') {
        local_24 = 0x75b75c;
        pvVar5 = (HANDLE)GetCurrentProcessId();
      }
      else {
        local_24 = 0x75b753;
        pvVar5 = GetCurrentProcess();
      }
      if (DAT_00781518 == (code *)0x0) {
        if (DAT_00781514 == (code *)0x0) {
          cVar3 = false;
        }
        else {
          local_24 = 0;
          local_28 = (HANDLE)0x75b7a9;
          FUN_0040810c(&local_34,local_c,0);
          local_28 = (HANDLE)0x75b7b1;
          local_28 = (HANDLE)FUN_00407670(local_34);
          local_30 = 0x75b7b9;
          local_2c = pvVar5;
          iVar7 = (*DAT_00781514)();
          cVar3 = iVar7 != 0;
        }
      }
      else {
        local_24 = 0;
        local_28 = (HANDLE)0x75b774;
        FUN_00408144(&local_30,local_c);
        local_24 = 0x75b77c;
        local_24 = FUN_00407c60(local_30);
        local_2c = (HANDLE)0x75b784;
        local_28 = pvVar5;
        iVar7 = (*DAT_00781518)();
        cVar3 = iVar7 != 0;
      }
      puVar1 = local_18;
      if ((bool)cVar3 != false) {
        local_24 = 0x75b7cf;
        uVar6 = (*DAT_0078151c)();
        local_24 = uVar6 & 0xfffffefd | 0x2214;
        local_28 = (HANDLE)0x75b7eb;
        (*DAT_00781520)();
        puVar1 = local_18;
      }
    }
  }
  local_18 = puVar1;
  DAT_00781508 = cVar3;
  puVar1 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_0075b82c;
  local_1c = (undefined1 *)0x75b80f;
  FUN_00406e5c(&local_34,local_20,puVar1);
  local_1c = (undefined1 *)0x75b817;
  FUN_00407a78(&local_30);
  local_1c = (undefined1 *)0x75b824;
  thunk_FUN_00406e80(&local_2c,10);
  return;
}
